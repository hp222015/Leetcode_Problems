class Solution {
public:
    bool isPalindrome(string s) {
        for(int i=0;i<s.size();i++)
        {
            if((s[i]>='A' && s[i]<='Z')||(s[i]>='a' && s[i]<='z')||(s[i]>='0' && s[i]<='9'))
            {
                if(s[i]>='A' && s[i]<='Z')
                    s[i]=s[i]+32;
                    
            }
            else
            {
                s.erase(i,1);
                i--;
            }

        }
        
       string t=s;
        reverse(t.begin(),t.end());
        //cout<<s<<endl<<t<<endl;
        if(s==t)
            return true;
        return false;
        
    }
};