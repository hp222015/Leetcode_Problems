class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==0)
            return 0;
        set<int> s;
        for(auto i:nums)
            s.insert(i);
        vector<int> v;
        for(auto i:s)
            v.push_back(i);
        int count=1;
        vector<int> ans;
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i+1]-v[i]==1)
            {
                count++;
            }
            else
            {
                ans.push_back(count);
                count=1;
            }
        }
        ans.push_back(count);
       return *max_element(ans.begin(),ans.end()); 
    }
};