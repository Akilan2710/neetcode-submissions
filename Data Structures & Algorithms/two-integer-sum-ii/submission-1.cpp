class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> indexnum;
        int n=numbers.size();
        for(int i=0;i<n;i++){
            int c=target-numbers[i];
            if(indexnum.count(c)){
                return {indexnum[c]+1,i+1};
            }
            indexnum[numbers[i]]=i;
        }
        return{};
    }
};
