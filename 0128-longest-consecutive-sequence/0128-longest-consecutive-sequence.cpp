class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s;
        for(auto i:nums)
            s.insert(i);
        int count=0,max=0;
        for(auto i:s)
        {
            int curr_elem=i,prev_elem=i-1;
            if(s.find(prev_elem)!=s.end())
                continue;
                
            while(s.find(curr_elem)!=s.end())
            {
                curr_elem+=1;
                count++;
            }
            if(count>max)
                max=count;
            count=0;
        }
       return max; 
    }
};