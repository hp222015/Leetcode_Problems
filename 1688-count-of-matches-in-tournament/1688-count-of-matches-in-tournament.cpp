class Solution {
public:
    int numberOfMatches(int n) {
        int m,ta,sum=0;
        while(ta!=1)
        {
            if(n%2==0)
            {
                ta=n/2;
                m=n/2;
            }
            else
            {
                m=(n-1)/2;
                ta=n-m;
            }
            n=ta;
            sum+=m;
        }
       return sum; 
    }
};