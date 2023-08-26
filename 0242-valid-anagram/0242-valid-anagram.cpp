class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> m1;
        for(auto i:s)
            m1[i]++;
            
        for(auto i:t)
            m1[i]--;
        for(auto i:m1)
        {
            if(i.second!=0)
                return false;
        }
        return true;
    }
};