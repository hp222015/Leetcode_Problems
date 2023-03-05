class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>a1;
        vector<int>a2;
        for(auto i:nums)
        {
            if(i<0)
                a1.push_back(i);
            else
                a2.push_back(i);
        }
        int j=0;
        for(int i=0;i<nums.size();i+=2)
        {
            nums[i]=a2[j];
            nums[i+1]=a1[j];
            j++;
        }
        return nums;
    }
};