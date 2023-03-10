class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int low=0, upper=(m*n)-1,mid;
        int row,col;
        while(low<=upper)
        {
            mid=(upper+low)/2;
            row=mid/n;
            col=mid%n;
            if(matrix[row][col]==target)
                return true;
            else if(matrix[row][col]<target)
                low=mid+1;
            else
                upper=mid-1;
            
        }
        return false;
    }
};