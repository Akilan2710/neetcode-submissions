class Solution {
public:
    void sortColors(vector<int>& nums) {
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                nums[i]=nums[k];
                nums[k]=0;
                k++;
            }
        }
        int a=k;
        for(int i=a;i<nums.size();i++){
            if(nums[i]==1){
                nums[i]=nums[k];
                nums[k]=1;
                k++;
            }
        }
    }
};