class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>>m1;
        for(auto i:strs)
        {
            string word=i;
            sort(word.begin(),word.end());
            m1[word].push_back(i);
        }
        for(auto j:m1)
        {
            ans.push_back(j.second);
        }
        return ans;
    }
};