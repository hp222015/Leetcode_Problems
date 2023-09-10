class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,bool>m1;
        for(int i=0;i<nums.size();i++)
        {
            m1[nums[i]]=true;
        }
        for(auto i:m1)
        {
            if(m1.count(i.first-1))
                m1[i.first]=false;
        }
        int maxi=0;
        for(auto i:m1)
        {            
            if(i.second==true)
            {
                int j=0,count=0;
                while(m1.count(i.first+j))
                {
                    count++;
                    j++;
                }
                if(count>maxi)
                    maxi=count;
            }
        }
        return maxi;
    }
};