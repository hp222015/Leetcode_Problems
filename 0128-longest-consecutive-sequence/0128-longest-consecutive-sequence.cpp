class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>s(nums.begin(),nums.end());
        if(s.size()==0) return 0;
        set<int> :: iterator it;
        int count=0,maxi=0;
         for(it =s.begin();it!=prev(s.end());it++)
         {
             if(*(it)+1!=*next(it))
             {                 
                 if(count>maxi)
                     maxi=count;
                 count=0;
             }
             else
             {
                 count++;
             }
             cout<<count<<" ";    
         }
        if(count!=0 && count>maxi)
            maxi=count;
        return maxi+1;
    }
};