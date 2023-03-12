class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        // to count no. of distinct elements
       int count=unique(nums.begin(),nums.end())-nums.begin();
        if(count<nums.size())
            return true;
        return false;
        
    }
};