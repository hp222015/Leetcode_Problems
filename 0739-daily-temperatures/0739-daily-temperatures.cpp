class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n=temp.size();
        stack<int>s;
        vector<int> ans;
        ans.push_back(0);
        for(int i=n-1;i>=0;i--)
        {
            
            while(!s.empty())
            {
                if(temp[i]<temp[s.top()])
                {
                    ans.push_back(s.top()-i);
                    break;
                }
                else
                {
                    s.pop();
                    if(s.empty())
                        ans.push_back(0);
                }
            }
            s.push(i);
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};