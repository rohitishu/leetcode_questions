class Solution {
public:
    void moveZeroes(vector<int>& nums) {
   int l=0,c=0;
        while(c<nums.size())
        {
            if(nums[c]!=0)
            {
                swap(nums[l],nums[c]);
                l++;
            }
            
                c++;
        }
       
    }
};
