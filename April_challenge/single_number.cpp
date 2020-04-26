int singleNumber(vector<int>& nums) {
    int r=0;
        for(auto &it:nums)
            r=r^it;
        return r;
    }

