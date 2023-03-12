class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>m1;
        for(auto i:nums)
            m1[i]++;
        for(auto i:m1)
        {
            if(i.second>1)
                return true;
        }
       return false; 
    }
};