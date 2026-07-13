class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()<2)
            return s.length();
        unordered_set<char> a;
        int ans=1,len=1,l=0,r=1;
        a.insert(s[l]);
        while(l<r && r<s.length()){
            a.insert(s[r]);
            len++;
            if(a.size()==len){
                r++;
                ans=max(len,ans);
            }
            else{
                while(s[r]!=s[l]){
                    a.erase(s[l]);
                    l++;
                    len--;
                }
                l++;
                len--;
                r++;
            }
        }
        return ans;
    }
};
