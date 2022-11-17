class Solution {
public:
    int romanToInt(string s) {
        map<char,int>map1;
        map1['I']=1;
        map1['V']=5;
        map1['X']=10;
        map1['L']=50;
        map1['C']=100;
        map1['D']=500;
        map1['M']=1000;
        int sum=0,val;
        for(int i=0;i<s.size();i++)
        {
          val=map1[s[i]];
            if(val>=map1[s[i+1]])
                sum+=val;
            else
                sum-=val;
        }
        return sum;
    }
};