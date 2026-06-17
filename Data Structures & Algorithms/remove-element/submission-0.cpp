class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                int t=nums[k];
                nums[k]=nums[i];
                nums[i]=t;
                k++;
            }
        }
        return k;
    }
};