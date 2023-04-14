class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>s;
        if(pushed.size()!=popped.size())
            return false;
        int k=0;
        for(int i=0;i<pushed.size();i++)
        {
           s.push(pushed[i]);
           while(s.top()==popped[k])
           {
               k++;
               s.pop();
               if(s.empty())
                   break;
           }
               
                
        }
        return s.empty();
    }
};