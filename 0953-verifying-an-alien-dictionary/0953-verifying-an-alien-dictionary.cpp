class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        map<char,int>m1;
        for(int i=0;i<order.size();i++)
          m1.insert({order[i],i});
        for(int i=0;i<words.size()-1;i++)
        {
            for(int j=0;j<words[i].length();j++)
            {
                if(j>=words[i+1].length())
                    return false;
                if(words[i][j]!=words[i+1][j])
                {
                    if(m1[words[i][j]]>m1[words[i+1][j]])
                        return false;
                    else
                        break;
                }
            }
        }
       return true; 
    }
};