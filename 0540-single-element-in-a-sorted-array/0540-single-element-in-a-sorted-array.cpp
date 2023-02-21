class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        map<int,int>m1;
        int c=0;
        for(auto i:nums)
            m1[i]++;
        for(auto i:m1)
        {
            if(i.second==1)
                return i.first;
        }
        return 0;
    }
};