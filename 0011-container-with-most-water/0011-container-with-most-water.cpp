class Solution {
public:
    int maxArea(vector<int>& height) {
        // Approach : take two pointer first to left and the other to right and start finding area between the two.
        int width=0;
        int area=0;
        int maxi=INT_MIN;
        int left=0,right=height.size()-1;
        while(left<=right)
        {
            area=min(height[left],height[right])*(right-left);
            cout<<area<<" ";
            if(area>maxi)
                maxi=area;
            if(height[left]<=height[right])
                left++;
            else
                right--;
        }
        return maxi;
    }
};