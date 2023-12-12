class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int s=nums.size()-1;
        int p=(nums[s]-1)*(nums[s-1]-1);
            return p;
    }
};