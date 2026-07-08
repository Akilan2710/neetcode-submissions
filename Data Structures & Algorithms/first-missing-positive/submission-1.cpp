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
        auto a=find(n.begin(),n.end(),false);
        if(a!=n.end()){
            return distance(n.begin(),a);
        }
        else{
            return nums.size()+1;
        }
    }
};