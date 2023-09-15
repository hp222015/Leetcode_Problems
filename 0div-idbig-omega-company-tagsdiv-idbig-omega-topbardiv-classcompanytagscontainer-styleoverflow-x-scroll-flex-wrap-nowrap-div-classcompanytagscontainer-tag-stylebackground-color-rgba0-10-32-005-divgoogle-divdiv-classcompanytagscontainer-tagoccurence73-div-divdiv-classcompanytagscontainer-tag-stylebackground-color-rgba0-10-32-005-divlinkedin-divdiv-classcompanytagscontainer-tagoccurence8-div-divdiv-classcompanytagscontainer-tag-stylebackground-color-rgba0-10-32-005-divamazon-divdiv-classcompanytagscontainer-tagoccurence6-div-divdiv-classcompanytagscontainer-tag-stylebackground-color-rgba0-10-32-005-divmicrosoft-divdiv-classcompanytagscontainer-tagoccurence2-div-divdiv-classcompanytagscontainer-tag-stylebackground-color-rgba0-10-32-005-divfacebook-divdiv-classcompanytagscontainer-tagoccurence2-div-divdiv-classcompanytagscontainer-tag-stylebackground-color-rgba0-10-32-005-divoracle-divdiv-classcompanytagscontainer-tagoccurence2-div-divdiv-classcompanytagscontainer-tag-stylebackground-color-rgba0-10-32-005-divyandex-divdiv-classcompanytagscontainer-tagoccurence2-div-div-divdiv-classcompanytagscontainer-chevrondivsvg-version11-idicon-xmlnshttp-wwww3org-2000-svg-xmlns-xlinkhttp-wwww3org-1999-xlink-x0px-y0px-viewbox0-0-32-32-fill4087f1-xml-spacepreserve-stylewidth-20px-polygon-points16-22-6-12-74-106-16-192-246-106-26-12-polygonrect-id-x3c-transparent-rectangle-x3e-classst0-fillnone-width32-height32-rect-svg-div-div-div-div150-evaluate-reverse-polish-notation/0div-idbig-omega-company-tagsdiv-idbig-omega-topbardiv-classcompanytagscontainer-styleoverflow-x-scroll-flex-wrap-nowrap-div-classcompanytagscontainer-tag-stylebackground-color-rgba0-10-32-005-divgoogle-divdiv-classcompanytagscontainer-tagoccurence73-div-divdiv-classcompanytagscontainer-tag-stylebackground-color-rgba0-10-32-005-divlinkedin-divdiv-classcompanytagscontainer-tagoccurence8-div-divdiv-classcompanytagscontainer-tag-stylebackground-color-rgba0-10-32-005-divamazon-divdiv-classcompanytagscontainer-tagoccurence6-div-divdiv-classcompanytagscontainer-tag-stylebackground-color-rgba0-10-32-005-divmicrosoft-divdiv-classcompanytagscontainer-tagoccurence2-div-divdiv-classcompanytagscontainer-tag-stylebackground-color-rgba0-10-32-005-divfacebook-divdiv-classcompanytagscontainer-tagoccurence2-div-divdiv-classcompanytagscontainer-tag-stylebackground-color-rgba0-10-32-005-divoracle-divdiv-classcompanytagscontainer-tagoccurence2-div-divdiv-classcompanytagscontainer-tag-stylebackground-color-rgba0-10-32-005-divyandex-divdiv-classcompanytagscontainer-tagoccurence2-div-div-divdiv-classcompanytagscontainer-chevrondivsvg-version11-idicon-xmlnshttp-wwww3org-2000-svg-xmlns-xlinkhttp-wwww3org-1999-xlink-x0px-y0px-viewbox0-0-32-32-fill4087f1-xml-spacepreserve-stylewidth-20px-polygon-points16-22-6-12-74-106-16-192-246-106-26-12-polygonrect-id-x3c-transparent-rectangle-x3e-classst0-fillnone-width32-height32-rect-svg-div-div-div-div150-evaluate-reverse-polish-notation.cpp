class Solution {
public:
    int operate(int num1, int num2, string op)
    {
        if(op=="+")
            return num1 + num2;
        if(op=="-")
            return num1 - num2;
        if(op=="*")
            return num1 * num2;
        if(op=="/")
            return num1 / num2;
        return INT_MIN;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(auto i:tokens)
        {
            if(i=="+" || i=="-" || i=="*" || i=="/")
            {
                if(!s.empty())
                {
                    int num2=s.top();
                    s.pop();
                    int num1=s.top();
                    int r=operate(num1,num2,i);
                    s.pop();
                    s.push(r);
                }
                
            }
            else
              s.push(stoi(i));
        }
       return s.top(); 
    }
};