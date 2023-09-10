class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       int s=nums.size();
       vector<int>prev(s);
       vector<int>next(s);
       vector<int>ans;
       
       prev[0]=1;
       next[s-1]=1;
       for(int i=1;i<s;i++)
           prev[i]=prev[i-1]*nums[i-1];
       for(int i=s-2;i>=0;i--)
           next[i]=next[i+1]*nums[i+1];
       for(int i=0;i<s;i++)
           ans.push_back(prev[i]*next[i]);
       return ans;
    }
};
   