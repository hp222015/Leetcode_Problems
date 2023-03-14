class Solution {
public:
    bool isPalindrome(string s) {
        string t="";
        for(auto i:s)
        {
            if((i>=65 && i<=90) || (i>=97 && i<=122) || (i>='0' && i<='9'))
            {
                t+=i;
            }
        }
        for(int i=0;i<t.size();i++)
        {
            if(t[i]>=65 && t[i]<=90)
                t[i]=t[i]+32;
            cout<<t[i];
        }
        cout<<endl;
       int i=0,j=t.size()-1;
        while(i<=j)
        {
            //cout<<t[i]<<" "<<t[j]<<" ";
            if(t[i]!=t[j])
                return false;
            i++;j--;
        }
        return true;
    }
};