class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
        map<char,int>m1;
        for(int i=0;i<s.size();i++)
        {
            m1[s[i]]++;
            m1[t[i]]--;
        }
       for(auto i:m1)
       {
           if(i.second!=0)
               return false;
       }
       return true;     
    }
};