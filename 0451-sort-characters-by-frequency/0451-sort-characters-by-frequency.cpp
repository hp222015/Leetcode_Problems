class Solution {
public:
    
    string frequencySort(string s) {
        priority_queue<pair<int,char>> maxh;
        map<char,int> m1;
        for(auto i:s)
            m1[i]++;
        for(auto i:m1)
           maxh.push({i.second,i.first}); 
         string str;
        int a;
        while(maxh.size()>0)
        {
            a=maxh.top().first;
            while(a--)
            str.push_back(maxh.top().second);
            maxh.pop();
        }
       return str; 
    }
};