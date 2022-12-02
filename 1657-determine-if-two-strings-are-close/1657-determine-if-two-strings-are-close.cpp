class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size())
            return false;
        set<char> s;
        for(char i: word1)
          s.insert(i);
        for(auto i:s)
        {
            if(word2.find(i)==string::npos)
                return false;
        }
        map<char,int> m1;
        map<char,int> m2;
        for(int i=0;i<word1.size();i++)
        {
            m1[word1[i]]++;
            m2[word2[i]]++;
        }
        vector<int> v;
        vector<int> v1;
        for(auto i: m1)
            v.push_back(i.second);
        for(auto i:m2)
            v1.push_back(i.second);
        sort(v1.begin(),v1.end());
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            if(v[i]!=v1[i])
                return false;
        }
        return true;
    }
};