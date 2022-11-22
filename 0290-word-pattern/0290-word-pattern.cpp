class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> v;
        s=s+' ';
        string str;
        for(char i:s)
        {
            if(i!=' ')
                str+=i;
            else
            {
                v.push_back(str);
                str="";
            } 
        }
        
        map<char,string> m1;
        map<string,bool> m2;
        if(pattern.size()!=v.size())
            return false;
        for(int i=0;i<v.size();i++)
        {
            char ch=pattern[i];
            if(m1.find(ch)!=m1.end())
            {
               if(m1[ch]!=v[i])
                   return false;
            }
            else
            {
                if(m2[v[i]]==true)
                    return false;
                else
                {
                    m1.insert({ch,v[i]});
                    m2[v[i]]=true;
                }
            }
        }                
        return true;
    }
};