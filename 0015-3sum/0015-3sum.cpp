class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>s;
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        int sz=nums.size();
        for(int i=0;i<sz-1;i++)
        {
            int j=i+1,k=sz-1;
            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==0)
                {
                    s.insert({nums[i],nums[j],nums[k]});
                    j++;k--;
                }
                else if(sum>0)
                    k--;
                else
                    j++;
            }
        }
        for(auto i:s)
            ans.push_back(i);
        return ans;
    }
};