class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>m1;
        for(auto i:arr)
            m1[i]++;
        vector<int> nums;
        vector<int>:: iterator it;
        for(auto i:m1)
        {
            it=find(nums.begin(),nums.end(),i.second);
                if(it!=nums.end())
                    return false;
            nums.push_back(i.second);
        }
        return true;
    }
};