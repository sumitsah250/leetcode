#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void numRescueBoats(vector<int>& numbers) {
        for(int i=0;i<numbers.size()-1;i++){
            if(numbers[i]==0){
                for(int j=i;j<numbers.size()-1;j++){
                    swap(numbers[j],numbers[j+1]);
                }
            }
        }
       
        
    }
};


int main(){
    vector<int> vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(0);
    vec.push_back(3);
    vec.push_back(12);
    Solution s1;
    s1.numRescueBoats(vec);
    for(int i=0;i<vec.size();i++){
        cout<<vec[i];
    }
     



    return 0;
}