class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int l=0;
        while(l<word1.size() && l<word2.size()){
            ans+=word1[l];
            ans+=word2[l++];
        }
        ans+=word2.substr(l);
        ans+=word1.substr(l);
        return ans;
    }
};