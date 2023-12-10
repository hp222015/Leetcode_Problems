class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> result;
        vector<int>ans;
        for(int j=0;j<matrix[0].size();j++)
        {
            for(int i=0;i<matrix.size();i++)
            {
                ans.push_back(matrix[i][j]);
            }
            result.push_back(ans);
            ans.clear();
        }
        return result;
        
    }
};