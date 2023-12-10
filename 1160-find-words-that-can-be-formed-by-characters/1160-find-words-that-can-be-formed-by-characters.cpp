class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
       unordered_map<char,int>m1,tmp;
       for(char i:chars)
         m1[i]++;
       int flag,sum=0;
       for(auto i:words)
       {
           flag=0;
           tmp.insert(m1.begin(),m1.end());
           for(auto j:i)
           {
               tmp[j]--;
           }
           for(auto k:tmp)
           {
               if(k.second<0)
               {
                   flag=1;
                   break;
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