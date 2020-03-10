class Solution {
public:
    int maxArea(vector<int>& height) {
        int contain=0,max=0;
        for(int i=0;i<height.size();i++){
            for(int j=i+1;j<height.size();j++){
                if(height[i]>height[j]){
                    contain=height[j]*(j-i);
                }
                else{
                    contain=height[i]*(j-i);
                }
                if(max<contain){
                    max=contain;
                }
            }
        }
        return max;
    }
};
