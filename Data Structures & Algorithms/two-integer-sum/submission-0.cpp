class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> num;
        for(int i=0;i<nums.size();i++){
            int c=target-nums[i];
            if(num.count(c)){
                if(i<num[c]){
                    return {i,num[c]};
                }
                else{
                    return {num[c],i};
                }
            }
            num[nums[i]]=i;
        }
        return {0,0};
    }
};