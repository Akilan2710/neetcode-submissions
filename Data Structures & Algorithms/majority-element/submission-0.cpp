class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> n;
        int m=nums[0];
        for(int i:nums){
            n[i]++;
            if(n[i]>n[m]){
                m=i;
            }
        }
        return m;
    }
};