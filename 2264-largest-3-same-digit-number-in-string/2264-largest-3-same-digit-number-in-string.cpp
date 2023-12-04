class Solution {
public:
    string largestGoodInteger(string num) {
        vector<int> ans;
        string st,res;
        for(int i=0;i<num.size()-2;i++)
        {
            if(num[i]==num[i+1] && num[i+1]==num[i+2])
            {
                st.push_back(num[i]);
                st.push_back(num[i+1]);
                st.push_back(num[i+2]);
            }
            if(!st.empty())
                ans.push_back(stoi(st));
            st="";
        }
        if(ans.size()==0)
            return "";
        else
        {
            int maxi=*max_element(ans.begin(),ans.end());
            if(maxi==0)
                res="000";
            else
                res=to_string(maxi);
        }
        
        return res;
    }
};