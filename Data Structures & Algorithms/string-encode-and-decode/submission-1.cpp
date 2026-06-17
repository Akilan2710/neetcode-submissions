class Solution {
public:

    string encode(vector<string>& strs) {
        string ans;
        for(string i:strs){
            ans+=to_string(i.size())+'#'+i;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i=0;
        while(i<s.size()){
            int n=0;
            while(s[i]!='#'){
                n=n*10+(s[i]-'0');
                i++;
            }
            i++;
            ans.push_back(s.substr(i,n));
            i+=n;
        }
        return ans;
    }
};