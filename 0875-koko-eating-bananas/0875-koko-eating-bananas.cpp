class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1,high=*max_element(piles.begin(),piles.end());
        int ans;
        while(low<=high)
        {
            int mid=(low+high)/2;
            long int count=0;
            for(int i=0;i<piles.size();i++)
             count+=ceil(piles[i]*1.0/mid);
            if(count<=h)
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