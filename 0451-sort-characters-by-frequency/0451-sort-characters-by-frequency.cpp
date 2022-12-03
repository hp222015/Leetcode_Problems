class Solution {
public:
    
    string frequencySort(string s) {
        priority_queue<pair<int,char>> maxh;
        map<char,int> m1;
        for(auto i:s)
            m1[i]++;
        for(auto i:s)
           maxh.push({m1[i],i}); 
         string str;
        while(maxh.size()>0)
        {
            str.push_back(maxh.top().second);
            maxh.pop();
        }
       return str; 
    }
};