class Solution {
public:
    int strStr(string haystack, string needle) {
      //sliding window
        int n=haystack.size();
        int m=needle.size();
        for(int window=0;window<=n-m;window++)
        {
            for(int i=0;i<m;i++)
            {
                if(needle[i]!=haystack[window+i])
                    break;
                if(i==m-1)
                    return window;
            }
        }
        return -1; 
    }
};