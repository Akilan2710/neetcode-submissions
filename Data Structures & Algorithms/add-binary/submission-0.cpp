class Solution {
public:
    string addBinary(string a, string b) {
        string res="";
        int c=0;
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        for (int i = 0; i < max(a.length(), b.length()); i++) {
            int d=c+(i<a.length()?a[i]-'0':0)+(i<b.length()?b[i]-'0':0);
            res+='0'+(d%2);
            c=d/2;
        }
        if(c){
            res+='1';
        }
        reverse(res.begin(),res.end());
        return res;
    }
};