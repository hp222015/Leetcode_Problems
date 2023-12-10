class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
       unordered_map<char,int>m1,tmp;
       for(char i:chars)
         m1[i]++;
       int flag,sum=0;
       for(auto i:words)
       {
           for(auto j:i)
               tmp[j]++;
           flag=0;
           for(auto j:i)
           {
               if(m1[j]<tmp[j])
               {
                   flag=1;
                   continue;
               }
           }
           if(flag==0)
           {
               sum+=i.size();
           }
           tmp.clear();    
       }
        return sum;
    }
};