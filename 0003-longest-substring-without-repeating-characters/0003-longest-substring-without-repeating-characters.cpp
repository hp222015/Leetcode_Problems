class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // two pointer approach
        int start=0,end=0,max=0;
        set<int> s1;
        while(start!=s.size())
        {
            auto it=s1.find(s[start]);
                if(it==s1.end())
                {
                    if(start-end+1>max)
                        max=start-end+1;
                    s1.insert(s[start]);
                    start++;
                }
                else
                {
                    s1.erase(s[end]);
                    end++;
                }
        }
        return max;
    }
};