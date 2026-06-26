class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<vector<int>> e(nums.size()+1);
        unordered_map<int,int> c;
        for(int i:nums){
            c[i]++;
            e[c[i]].push_back(i);
        }
        return e[1+nums.size()/3];
    }
};