class Solution {
public:
    int totalMoney(int n) {
        int sum=0,i=1,j=7,k=2;
        while(n--)
        {
            if(i>j)
            {
                i=k++;
                j++;
            }
            sum+=i;
            i++;
        }
        return sum;
        
    }
};