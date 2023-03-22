class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,1);
        // finding the product of all numbers to the left of i
        for(int i=1;i<n;i++)
        {
            ans[i]=ans[i-1]*nums[i-1];
        }
        // finding the product of all numbers to the right of i
        int rp=1;
        for(int i=n-1;i>=0;i--)
        {
            ans[i]*=rp;
            rp*=nums[i];
        }
       return ans; 
        
    }
};