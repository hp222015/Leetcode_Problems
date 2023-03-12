class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count=0,flag=0;
        for(auto i:arr1)
        {
            flag=0;
            for(auto j:arr2)
            {
                if(abs(i-j)<=d)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                count++;
        }
        return arr1.size()-count;
    }
};