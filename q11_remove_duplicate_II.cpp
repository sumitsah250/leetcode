class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        std::sort(nums.begin(),nums.end());
        vector<int> vec;
        int count=1;
        int sum=nums.size()/3;
        if(nums.size()>2){
             for(int i=0;i<nums.size()-1;i++){
             
            if(nums[i]==nums[i+1]){
                count ++;
               
            }else{
                count =1;
            }
             if(count>sum){
                    vec.push_back(nums[i]);
                }
           
        }  

        }
        else{
            if(nums.size()>1){
                vec.push_back(nums[0]);
                vec.push_back(nums[1]);

            }else{
                 vec.push_back(nums[0]);

            }
           
        }
        auto it= unique(vec.begin(), vec.end());
        vec.erase(it,vec.end());
       
        return vec;      
    }
};