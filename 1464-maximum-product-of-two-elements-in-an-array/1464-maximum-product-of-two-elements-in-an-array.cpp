class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> maxh;
        int product;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                product=(nums[i]-1)*(nums[j]-1);
                maxh.push(product);
            }
        }
        return maxh.top();
    }
};