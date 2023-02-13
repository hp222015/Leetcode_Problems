class Solution {
public:
    int countOdds(int low, int high) {
        /* to solve above problem in O(1) complexity
            I need to find odd no from 1 to low-1 and odd no. from 1 to high
            odd no. from 1 to any no. is (no.+1)/2
            low-1 because we don't need to include low in count of odd no's from 1 to low
            */
        return ((high+1)/2-low/2);
        
    }
};