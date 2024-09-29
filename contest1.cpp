#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    char kthCharacter(int k) {
        vector<char> vec1;
        vec1.push_back('a');
        

        while(vec1.size()<k){
            cout<<vec1.size()<<"here"<<endl;

            for(int i=0;i<vec1.size();i++){
               vec1.push_back(char(vec1[i]+1));
            }
        }
        for(int i=0;i<vec1.size();i++){
               vec1.push_back(char(vec1[i]+1));
            }
        return vec1[k];
    }
};



int main(){
    Solution s1;
    cout<<s1.kthCharacter(5);
    return 0;

}