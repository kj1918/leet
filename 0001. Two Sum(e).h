class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> r={0,1};
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(j!=i&&nums[i]==(target-nums[j]))
                {
                    r[0]=i;
                    r[1]=j;
                    return r;
                }
            }
        }
        return r;
    }

};
