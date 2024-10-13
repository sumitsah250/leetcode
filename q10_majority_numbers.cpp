class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count =0;
        int element =nums[0];
        int sum=0;
        std::sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                if(count>=sum){
                    sum=count;
                    element=nums[i];
                }
                 count++;
            }else{
                count=0;
            }
        }
        return element;
        
    }
};