class Solution {
public:
    bool checkPalindrome(int i, int j, string s)
    {
        while(i<j)
        {
            if(s[i]!=s[j])
             return false;
            i++;j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i=0,j=s.size()-1;
        while(i<j)
        {
            if(s[i]==s[j])
            {
                i++;j--;
            }
            else
            {
                if(checkPalindrome(i+1,j,s)==true || checkPalindrome(i,j-1,s)==true)
                    return true;
                else
                    return false;
            }
        }
        return true;
        
        
    }
};