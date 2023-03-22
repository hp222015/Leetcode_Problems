class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int count=0;
            long long ans=0;
        for(auto i:nums)
        {
            if(i==0)
            {
                count++;
                ans+=count;
            }
            else
                count=0;
        }
        return ans;
    }
};