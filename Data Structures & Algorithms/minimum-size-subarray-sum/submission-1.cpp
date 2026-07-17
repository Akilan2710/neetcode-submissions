class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0;
        int a=INT_MAX;
        int s=0;
        for(int r=0;r<nums.size();r++){
            s+=nums[r];
            while(s>=target){
                if(a==1){
                    break;
                }
                a=min(r-l+1,a);
                s-=nums[l];
                l++;
            }
        }
        return a==INT_MAX?0:a;
    }
};