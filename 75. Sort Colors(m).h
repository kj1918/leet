class Solution {
public:
    void sortColors(vector<int>& nums) {
        if(nums.size()==1){
            return;
        }
        int i0=0,i2=nums.size()-1,i=0;
        while(i<=i2){
            if(nums[i]==0){
                int temp=nums[i0];
                nums[i0]=nums[i];
                nums[i]=temp;
                i0++;
            }
            else if(nums[i]==2){
                int temp=nums[i2];
                nums[i2]=nums[i];
                nums[i]=temp;
                i2--;
                i--;
            }
            i++;
        }
    }
};
