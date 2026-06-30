class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int l=0;
        while(l<word1.size() && l<word2.size()){
            ans.push_back(word1[l]);
            ans.push_back(word2[l]);
            l++;
        }
        if(l==word1.size()){
            ans.append(word2,l);
        }
        else if(l==word2.size()){
            ans.append(word1,l);
        }
        return ans;
    }
};