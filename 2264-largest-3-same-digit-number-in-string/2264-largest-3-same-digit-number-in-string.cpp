class Solution {
public:
    string largestGoodInteger(string num) {
        char maxi='\0';
        for(int i=0;i<num.size()-2;i++)
        {
            if(num[i]==num[i+1] and num[i]==num[i+2])
                maxi=max(maxi,num[i]);
        }
        if(maxi=='\0')
            return "";
        else
            return string(3,maxi);
        
    }
};