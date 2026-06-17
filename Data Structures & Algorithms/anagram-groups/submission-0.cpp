class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.size()==0){
            return {};
        }
        vector<vector<string>> r;
        vector<unordered_map<char,int>> m;
        for(int i=0;i<strs.size();i++){
            unordered_map<char,int> t;
            bool f=true;
            for(char c:strs[i]){
                t[c]++;
            }
            for(int j=0;j<m.size();j++){
                if(t==m[j]){
                    r[j].push_back(strs[i]);
                    f=false;
                    break;
                }
            }
            if(f){
                r.push_back({strs[i]});
                m.push_back(t);
            }
        }
        return r;
    }
};
