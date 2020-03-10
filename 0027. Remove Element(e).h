class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int length=nums.size(),temp,t,i=0;
        while(i<nums.size()){
            if(nums[i]==val){
                nums.erase(nums.begin()+i);
                i=0;
                length--;
                continue;
            }
            i++;
        }
        return length;
    }
};
