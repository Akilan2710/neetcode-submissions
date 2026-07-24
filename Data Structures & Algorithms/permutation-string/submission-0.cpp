class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.size()<s1.length()){
            return false;
        }
        unordered_map<char,int> m1,m2;
        for(int i=0;i<s1.size();i++){
            m1[s1[i]]++;
            m2[s2[i]]++;
        }
        int l=0,n=s1.size();
        if(m1==m2){
            return true;
        }
        while(n<s2.size()){
            m2[s2[n]]++;
            if(m2[s2[l]]==1)
                m2.erase(s2[l]);
            else
                m2[s2[l]]--;
            if(m1==m2){
                return true;
            }
            l++;
            n++;
        }
        return false;
    }
};
