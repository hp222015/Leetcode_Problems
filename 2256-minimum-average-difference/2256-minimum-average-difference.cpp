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
        priority_queue<pair<long,long>>maxh1;
        priority_queue<pair<long,long>>maxh2;
        long sum1=0,sum=0,avg1=0,avg2=0;
        int b;
        for(auto i:nums)
            sum+=i;
        //cout<<sum<<endl;
        for(int i=0;i<nums.size();i++)
        {
            sum1+=nums[i];
           // cout<<sum1<<" ";
            avg1=sum1/(i+1);
            b=nums.size()-(i+1);
            if(b!=0)
            avg2=(sum-sum1)/b;
            else if(b==0)
                avg2=0;
            //cout<<avg2<<" ";
            maxh1.push({abs(avg1-avg2),i});
        }
        while(maxh1.size()!=1)
        {
            //cout<<maxh1.top().first<<" ";
            maxh1.pop();
        }
        int a=maxh1.top().first;
        //cout<<a<<" "<<maxh1.top().second;
        maxh2.swap(maxh1);
        vector<int> v;
         while(maxh2.size()>0)
         {
             if(maxh2.top().first==a)
                 v.push_back(maxh2.top().second);
             maxh2.pop();
         }
        return *min_element(v.begin(),v.end());
    }
};