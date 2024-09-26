class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int maxarea=0;
        int length=0;
        int width=0;
        int area =0;
        while(l<r){
            length=min(height[l],height[r]);
            width=r-l;
            area = length*width;
            maxarea=max(maxarea,area);
            if(height[l]<height[r]){
                l+=1;
            }else{
                r-=1;
            }
            
        }
        return maxarea;
        
    }
};