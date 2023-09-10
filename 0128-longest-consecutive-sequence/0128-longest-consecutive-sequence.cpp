class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        set<int> s;
        for(auto i:nums)
            s.insert(i);
        nums.clear();
        for(auto i:s)
            nums.push_back(i);
        int count=1;
        vector<int> ans;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i+1]-nums[i]==1)
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