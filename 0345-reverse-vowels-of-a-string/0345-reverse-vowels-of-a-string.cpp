class Solution {
public:
    string reverseVowels(string s) {
        vector<char>v;
        vector<int>v1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||s[i]=='A' ||s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            {
                v.push_back(s[i]);
                v1.push_back(i);
            }  
        }  
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            s[v1[i]]=v[i];
        }
        return s;
    }
};