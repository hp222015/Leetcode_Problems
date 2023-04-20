class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        for(int i=0;i<numbers.size();i++)
        {
            int low=i+1,high=numbers.size()-1,mid;            
            int temp_target=target-numbers[i];
            int flag=0;
            ans.push_back(i+1);
            while(low<=high)
            {
                mid=(low+high)/2;
                if(numbers[mid]==temp_target)
                {
                    ans.push_back(mid+1);
                    flag=1;
                    break;
                }
                else if(numbers[mid]<temp_target)
                    low=mid+1;
                else
                    high=mid-1;
                    
            }
            if(flag==1)
                return ans;
            else
            {
                ans.clear();
            }
        }
        return ans;
    }
};