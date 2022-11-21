class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count1=0,count2=0,count3=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                count1++;
            if(nums[i]==1)
                count2++;
            if(nums[i]==2)
                count3++;
        }
        int i=0;
        while(count1--)
           nums[i++]=0;
        while(count2--)
            nums[i++]=1;
        while(count3--)
            nums[i++]=2;
    }
};