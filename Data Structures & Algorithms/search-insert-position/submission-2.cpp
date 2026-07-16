class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1,m;
        if(nums[r]<target){
            return r+1;
        }
        if(nums[0]>=target){
            return 0;
        }
        while(l<=r && nums[l]<target){
            m=l+(r-l)/2;
            if(nums[m]==target){
                return m;
            }
            if(nums[l]<=target && nums[m]>target){
                r=m-1;
            }
            else{
                l=m+1;
            }
        }
        return l;
    }
};