#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        std::sort(people.begin(),people.end());
        int a=0;
        int b=people.size()-1;
        int boat=0;
        while(a<=b){
            if((people[a]+people[b])>limit){
                boat++;
                b--;
            }else{
                boat++;
                a++;
                b--;
            }
        }
        return boat;      
        
    }
};