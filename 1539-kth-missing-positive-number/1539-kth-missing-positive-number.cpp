class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int count=0;
        vector<int>::iterator it;
        for(int i=1;i<2001;i++)
        {
            it=find(arr.begin(),arr.end(),i);
            if(it==arr.end())
                count++;
            if(count==k)
                return i;
        }
        return 0;
    }
};