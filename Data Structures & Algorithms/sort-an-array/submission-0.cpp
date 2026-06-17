class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        unordered_map<int,int> c;
        int min = *min_element(nums.begin(),nums.end());
        int max = *max_element(nums.begin(),nums.end());
        for(int i:nums){
            c[i]++;
        }
        int i=0;
        for(int val=min;val<=max;val++){
            while(c[val]>0){
                nums[i]=val;
                i++;
                c[val]--;
            }
        }
        return nums;
    }
};