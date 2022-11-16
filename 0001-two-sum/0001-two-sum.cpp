class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> u_mp;
        vector<int> ans;
        int key;
        for(int i=0;i<nums.size();i++)
        {
            key = target-nums[i];
            if(u_mp.find(key) != u_mp.end())
            {
                ans.push_back(u_mp[key]);
                ans.push_back(i);
                return ans;
            }
            u_mp[nums[i]] = i;
        }
        return ans;
        
    }
};