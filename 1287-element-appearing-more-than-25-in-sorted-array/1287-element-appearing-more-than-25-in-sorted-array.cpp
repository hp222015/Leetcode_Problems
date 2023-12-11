class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int,int> m1;
        int t=arr.size()/4;
        for(auto i:arr)
        {
            m1[i]++;
        }
        for(auto i:m1)
        {
            if(i.second>t)
                return i.first;
        }
        return 0;
    }
};