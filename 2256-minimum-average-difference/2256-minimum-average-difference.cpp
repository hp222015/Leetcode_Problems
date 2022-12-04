class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        priority_queue<pair<long,long>>maxh1;
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
            maxh1.push({abs(avg1-avg2),i});
        }
        while(maxh1.size()!=1)
         maxh1.pop();
        return maxh1.top().second;
    }
};