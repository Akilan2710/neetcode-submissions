class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        vector<bool> n(nums.size()+1,false);
        n[0]=true;
        for(int i:nums){
            if(i>0 && i<=nums.size()){
                n[i]=true;
            }
        }
        int a=0;
        for(bool b:n){
            if(b==false){
                break;
            }
            a++;
        }
        return a;
    }
};