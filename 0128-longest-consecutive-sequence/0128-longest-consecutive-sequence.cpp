class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==0)
            return 0;
        auto it=unique(nums.begin(),nums.end());
        nums.erase(it,nums.end());
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