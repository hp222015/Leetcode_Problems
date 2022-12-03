class Solution {
public:
    string frequencySort(string s) {
        map<char,int> m1;
        for(auto i:s)
            m1[i]++;
        vector<int> v;
        for(auto i:m1)
        {
          v.push_back(i.second);
        }
         sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        int k=0;
        string str;
        /*for(auto i:m1)
        {
            if(i.second==v[k])
            {
               while(i.second--)
                   str.push_back(i.first);
                k++;
            }
                
        }*/
        for(auto i:v)
        {
          for(auto j:m1)
          {
              if(j.second==i)
              {
                  while(i--)
                      str.push_back(j.first);
                  m1.erase(j.first);
              }
          }
        }
       return str; 
    }
};