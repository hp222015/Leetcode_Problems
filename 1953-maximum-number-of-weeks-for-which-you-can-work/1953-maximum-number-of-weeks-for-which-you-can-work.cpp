class Solution {
public:
    long long numberOfWeeks(vector<int>& milestones) {
        long long sum=accumulate(milestones.begin(),milestones.end(),0ll);
        long long mx=*max_element(milestones.begin(),milestones.end());
        return min(sum,2*(sum-mx) +1);
    }
};