class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0,up=nums.size()-1,mid;
        while(low<=up)
        {
            mid=(low+up)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target)
                low=mid+1;
            else
                up=mid-1;
        }
        return -1;
        
    }
};