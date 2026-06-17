class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.size()==0){
            return {};
        }
        vector<vector<string>> r;
        unordered_map<string,vector<string>> m;
        for(string s:strs){
            string t(26,0);
            for(char c:s){
                t[c-'a']++;
            }
            m[t].push_back(s);
        }
        for(auto& a:m){
            r.push_back(move(a.second));
        }
        return r;
    }
};
