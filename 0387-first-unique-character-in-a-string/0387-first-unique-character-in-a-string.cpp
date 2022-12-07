class Solution {
public:
    int firstUniqChar(string s) {
       map<char,int>m1;
        for(auto i:s)
            m1[i]++;
        for(int i=0;i<s.size();i++)
        {
            if(m1[s[i]]==1)
                return i;
        }
        return -1;
    }
};