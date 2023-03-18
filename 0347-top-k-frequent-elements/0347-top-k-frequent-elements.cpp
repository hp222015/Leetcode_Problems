class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m1;
        priority_queue<int> maxh;
        vector<int>v;
        for(auto i:nums)
            m1[i]++;
        for(auto i:m1)
            maxh.push(i.second);
        while(k!=0)
        {
            for(auto i:m1)
            {
                if(maxh.top()==i.second && k!=0)
                {
                    v.push_back(i.first);
                    cout<<i.first;
                    maxh.pop();
                    k--;                    
                }
            }
        }
       return v; 
    }
};