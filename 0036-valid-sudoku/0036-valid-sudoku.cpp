class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char,int>m1;
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
               m1[board[i][j]]++;
            }
            m1.erase('.');
            for(auto k:m1)
            {
                if(k.second>1)
                    return false;
            }
            m1.clear();
        }
        m1.clear();
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
               m1[board[j][i]]++;
            }
            m1.erase('.');
            for(auto k:m1)
            {
                if(k.second>1)
                    return false;
            }
            m1.clear();
        }
        m1.clear();
        int m=1,n=1,p=0,q=0,x=3,y=3;
        while(y--)
        {
            while(x--)
            {
                for(int i=p;i<3*m;i++)
                {
                    for(int j=q;j<3*n;j++)
                    {
                        m1[board[i][j]]++;
                    }                    
                }
                m1.erase('.');
                for(auto k:m1)
                    {
                        if(k.second>1)
                            return false;
                    }
                m1.clear();
                n++;
                q+=3; 
            }
            m++;
            p+=3;
            n=1;q=0;x=3;
            m1.clear();
        }
        return true;
    }
};