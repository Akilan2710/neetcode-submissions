class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int m=0,c=0;
        for(int i:nums){
            if(c==0){
                m=i;
            }
            c+=(i==m)?1:-1;
        }
        return m;
    }
};