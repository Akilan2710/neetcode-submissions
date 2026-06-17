class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> m1,m2;
        for(char c:s){
            if(m1.count(c)){
                m1[c]++;
            }
            else{
                m1[c]=1;
            }
        }
        for(char c:t){
            if(m2.count(c)){
                m2[c]++;
            }
            else{
                m2[c]=1;
            }
        }
        if(m1==m2){
            return true;
        }
        return false;
    }
};
