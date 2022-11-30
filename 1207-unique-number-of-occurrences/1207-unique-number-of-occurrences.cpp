class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>m1;
        for(auto i:arr)
            m1[i]++;
        map<int,int>m2;
        for(auto i:m1)
        {
            m2[i.second]++;
        }
        for(auto i:m2)
        {
            if(i.second>1)
                return false;
        }
        return true;
    }
};