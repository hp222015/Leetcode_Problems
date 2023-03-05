class Solution {
public:
    int findHash(string str)
    {
        int sum=0;
        for(auto i:str)
        {
            sum+=(i-'a');
        }
        return sum;
    }
    int strStr(string haystack, string needle) {
        // Rabin karp algorithm
        int size1=haystack.size();
        int size2=needle.size();
        int s1=findHash(needle);
        if(size2>size1)
            return -1;
        for(int window=0;window<=size1-size2;window++)
        {
            string str1="";
            str1=haystack.substr(window,size2);
            if(findHash(str1)==s1)
            {
                for(int i=0;i<size2;i++)
                {
                    if(needle[i]!=str1[i])
                        break;
                    if(i==size2-1)
                        return window;
                }
            }
        }
        return -1;
        
    }
};