class Solution {
public:
    bool halvesAreAlike(string s) {
        int siz=s.size();
        string a=s.substr(0,siz/2);
        string b=s.substr(siz/2,siz/2);
        int count=0;
        for(int i=0;i<siz/2;i++)
        {
            if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'||
               a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
                count++;
            if(b[i]=='a' || b[i]=='e' || b[i]=='i' || b[i]=='o' || b[i]=='u'||
               b[i]=='A' || b[i]=='E' || b[i]=='I' || b[i]=='O' || b[i]=='U')
                count--;
        }
        if(count==0)
            return true;
        return false;
    }
};