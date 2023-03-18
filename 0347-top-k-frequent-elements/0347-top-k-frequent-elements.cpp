class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m1;
        for(int i=0;i<nums.size();i++)
          m1[nums[i]]++;
        priority_queue<pair<int,int>>maxh;
        for(auto i:m1)
            maxh.push({i.second,i.first});
        vector<int>ans;
        while(k--)
        {
            ans.push_back(maxh.top().second);
            maxh.pop();
        }
        return ans;
        
    }
};