class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++)
        {
            int low=0,upper=matrix[0].size()-1,mid;
            while(low<=upper)
            {
                mid=(upper+low)/2;
                if(matrix[i][mid]==target)
                    return true;
                else if(matrix[i][mid]<target)
                    low=mid+1;
                else if(matrix[i][mid]>target)
                    upper=mid-1;
            }
        }
       return false; 
    }
};