class Solution {
public:
    long int check_time(int speed, vector<int>& piles,int h)
    {
        long int count=0;
        for(int i=0;i<piles.size();i++)
        {
            count+=(piles[i]/speed)+(piles[i]%speed!=0);
            if(count>h)
                return count;
        }
        return count;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1,high=*max_element(piles.begin(),piles.end());
        int ans;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(check_time(mid,piles,h)<=h)
            {
                ans=mid;
                high=mid-1;
            }
            else
                low=mid+1;
        }
        return ans;
    }
};