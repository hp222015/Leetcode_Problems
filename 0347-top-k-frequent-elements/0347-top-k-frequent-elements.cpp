class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m1;
        for(auto i:nums)
        {
            m1[i]++;
        }
        vector<int> ans;
        while(k--)
        {
            int max=0;
            int key;
           for(auto i:m1)
           {
               if(i.second>max)
               {
                   max=i.second;
                   key=i.first;
               }
           }
         ans.push_back(key);
         m1.erase(key);
        }                      
        return ans;
    }
};