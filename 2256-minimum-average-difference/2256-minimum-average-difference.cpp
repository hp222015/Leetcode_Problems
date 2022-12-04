class Solution {
public:
    /*long avgdiff(int index, vector<int>nums)
    {
       long sum1=0,sum2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i<index+1)
                sum1+=nums[i];
            else
                sum2+=nums[i];
        }
        long avg1=sum1/(index+1);
        long avg2=0;
        int b=nums.size()-(index+1);
            if(b!=0)
             avg2=sum2/b;
        return abs(avg1-avg2);
        
    }*/
    int minimumAverageDifference(vector<int>& nums) {
        priority_queue<pair<long,long>>maxh;
        long sum1=0,sum=0,avg1=0,avg2=0;
        int b;
        for(auto i:nums)
            sum+=i;
        for(int i=0;i<nums.size();i++)
        {
            sum1+=nums[i];
            avg1=sum1/(i+1);
            b=nums.size()-(i+1);
            if(b!=0)
            avg2=(sum-sum1)/b;
            else if(b==0)
             avg2=0;
            maxh.push({abs(avg1-avg2),i});
        }
        while(maxh.size()!=1)
            maxh.pop();
        return maxh.top().second;
    }
};