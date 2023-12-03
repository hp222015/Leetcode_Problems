class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        int x=nums.size()-k;
        for(int i=0;i<x;i++)
        {
            nums.push_back(nums[i]);
        }
        nums.erase(nums.begin(),nums.begin()+x);
    }
};
