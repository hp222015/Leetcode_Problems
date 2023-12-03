class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        int j=1;
        if(k>n)
            k=k%n;
        int x=k;
        vector<int> arr;
        while(k)
        {
            arr.push_back(nums[n-k]);
                k--;
        }
        for(int i=n-1;i>=x;i--)
            {
                nums[i]=nums[i-x];
            }
        for(int i=0;i<x;i++)
        {
            nums[i]=arr[i];
        }
        
    }
};