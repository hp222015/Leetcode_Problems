class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n=matrix[0].size();
        unordered_map<int,int>m1;
        int l=0;
        for(auto i:matrix)
        {
            vector<int> j=i;
            sort(j.begin(),j.end());
            while(l!=i.size())
            {
            if(j[l]!=l+1)
                return false;
            l++;
            }
            j.clear();
            l=0;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                m1[matrix[i][j]]++;
                m1[matrix[j][i]]--;
            }
            for(auto k:m1)
            {
                if(k.second!=0)
                    return false;
            }
        }
        return true;
    }
};