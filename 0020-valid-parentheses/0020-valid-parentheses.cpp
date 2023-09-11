class Solution {
public:
    bool isValid(string s) {
        stack<char> s1;
        for(auto i:s)
        {
            if(i=='(' or i=='[' or i=='{')
                s1.push(i);
            else if(i==')' or i==']' or i=='}')
            {
                if(s1.empty())
                    return false;
                if((s1.top()=='(' and i==')') or(s1.top()=='{' and i=='}') or (s1.top()=='[' and i==']'))
                {
                    s1.pop();
                }
                else
                    return false;
            }
        }
         return s1.empty();
    }
};