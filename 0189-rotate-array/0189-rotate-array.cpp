class Solution {
public:
    void rotate(vector<int>& nums, int k) {
     k=k%nums.size();
     int j=0;
        int x=nums.size()-k;
        while(j<x){
            nums.push_back(nums[j]);
            j++;
        }

        nums.erase(nums.begin(),nums.begin()+x);
    }
};