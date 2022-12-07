class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums;
        vector<int>:: iterator it;
        for(auto i:nums1)
        {
            it=find(nums2.begin(),nums2.end(),i);
            if(it!=nums2.end())
            {
                nums.push_back(i);
                nums2.erase(it);
            }
        }
        return nums;
    }
};