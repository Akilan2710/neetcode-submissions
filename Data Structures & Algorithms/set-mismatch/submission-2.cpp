class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> a(2);
        a[1]=nums.size()*(nums.size()+1)/2-nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                a[0]=nums[i];
            }
            else{
                a[1]-=nums[i];
            }
        }
        return a;
    }
};