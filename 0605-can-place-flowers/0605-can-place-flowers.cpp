class Solution {
public:
    bool canPlaceFlowers(vector<int>& fl, int n1) {
        int count=0;
        int n=fl.size();
        for(int  i=0;i<n;i++)
        {
           if((i-1==-1 || fl[i-1]==0)&& fl[i]==0 && (i+1==n ||fl[i+1]==0))
           {
               fl[i]=1;
               count++;
           }
        }
        if(count>=n1)
            return true;
        return false;
            
    }
};