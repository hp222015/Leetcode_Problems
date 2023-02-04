class Solution {
public:
    bool isvalid(string str1,string str2,int k)
    {
        int len1=str1.length(),len2=str2.length();
        string str=str1.substr(0,k);
        if(len1%k==0 && len2%k==0)
        {
            return str1==repstring(str,(len1/k)) && str2==repstring(str,len2/k);
        }
        else
            return false;
        
    }
    string repstring(string str,int k)
    {
        string ans="";
        while(k--)
         ans+=str;
        return ans;
    }
    string gcdOfStrings(string str1, string str2) {
        int len1=str1.length(),len2=str2.length();
        for(int i=min(len1,len2);i>0;i--)
        {
            if(isvalid(str1,str2,i))
                return str1.substr(0,i);
        }
       return ""; 
    }
};