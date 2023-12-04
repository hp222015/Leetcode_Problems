class Solution {
public:
    int maxArea(vector<int>& height) {
        int minh,prod;
        int maxi=INT_MIN;
        int i=0,j=height.size()-1;
        while(i<=j)
        {
                prod=1;     
                minh=min(height[i],height[j]);
                prod=minh*(j-i);
                if(prod>maxi)
                    maxi=prod;
                if(height[i]<height[j])
                    i++;
                else
                    j--;
        }
        return maxi;
        
    }
};