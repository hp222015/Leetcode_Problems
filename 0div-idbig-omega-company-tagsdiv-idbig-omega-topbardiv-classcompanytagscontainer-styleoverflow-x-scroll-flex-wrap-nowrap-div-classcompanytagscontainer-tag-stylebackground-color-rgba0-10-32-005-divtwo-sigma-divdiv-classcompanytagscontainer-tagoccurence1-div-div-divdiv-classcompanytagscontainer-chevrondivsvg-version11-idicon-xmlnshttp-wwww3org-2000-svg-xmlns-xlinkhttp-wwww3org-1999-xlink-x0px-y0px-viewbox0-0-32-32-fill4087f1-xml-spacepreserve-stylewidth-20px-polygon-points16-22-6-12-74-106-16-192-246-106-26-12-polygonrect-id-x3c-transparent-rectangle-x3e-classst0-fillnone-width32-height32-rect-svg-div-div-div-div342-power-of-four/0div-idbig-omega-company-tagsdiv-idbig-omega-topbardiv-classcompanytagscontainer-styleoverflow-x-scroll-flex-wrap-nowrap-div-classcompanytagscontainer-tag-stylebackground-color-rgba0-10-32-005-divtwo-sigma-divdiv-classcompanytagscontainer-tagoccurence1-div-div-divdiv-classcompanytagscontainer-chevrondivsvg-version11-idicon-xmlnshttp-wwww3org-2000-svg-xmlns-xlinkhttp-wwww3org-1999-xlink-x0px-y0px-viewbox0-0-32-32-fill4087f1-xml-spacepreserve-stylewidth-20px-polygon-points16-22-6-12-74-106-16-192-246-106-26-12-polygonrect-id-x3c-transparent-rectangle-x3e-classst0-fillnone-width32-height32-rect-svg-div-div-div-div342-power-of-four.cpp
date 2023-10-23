class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==0) return false;
        double r=(log(n)*1.0)/log(4);
        if(round(r)==r)
            return true;
        return false;
        
    }
};