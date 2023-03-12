class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        for(auto i:nums)
        {
            int x;
            if(i>0)
            {
                x=i;
            for(int j=0;j<nums.size();j++)
            {
                nums[j]=nums[j]-x;
            }
            count++;
            }
        }
       return count; 
    }
};