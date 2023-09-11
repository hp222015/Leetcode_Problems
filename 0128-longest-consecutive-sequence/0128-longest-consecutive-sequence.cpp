class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s;
        for(int i=0;i<nums.size();i++)
            s.insert(nums[i]);  
        int maxlen=0;
        for(auto i:s)
        {
            int count=0;
            if(s.find(i-1)==s.end())
            {
                while(s.find(i)!=s.end())
                {
                    count++;
                    i++;
                }
               if(count>maxlen)
                   maxlen=count;
            }
        }
        return maxlen;
    }
};