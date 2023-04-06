class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
          vector<int> ans;
        sort(potions.begin(),potions.end());
        int m=potions.size();
        int max_potion=potions[m-1];
        for(auto i:spells)
        {
            long long min_potion=ceil((1.0*success)/i);
            if(min_potion>max_potion)
            {
                ans.push_back(0);
                    continue;
            }
            auto it=lower_bound(potions.begin(),potions.end(),min_potion)-potions.begin();
            ans.push_back(m-it);
        }
       return ans; 
    }
};