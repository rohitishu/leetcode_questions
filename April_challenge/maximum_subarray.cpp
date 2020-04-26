class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int p=nums[0],maxi=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            p=max(p+nums[i],nums[i]);
            maxi=max(maxi,p);
        }
        return maxi;
    }
};
