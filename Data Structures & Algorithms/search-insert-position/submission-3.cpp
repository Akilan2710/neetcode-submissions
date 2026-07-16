class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int c=0;
        for(int n:nums){
            if(n<target){
                c++;
            }
        }
        return c;
    }
};