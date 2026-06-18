class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> prefix(n),sufix(n),ans;
        prefix[0]=1;
        sufix[n-1]=1;
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]*nums[i-1];
            sufix[n-1-i]=sufix[n-i]*nums[n-i];
        }
        for(int j=0;j<n;j++){
            ans.push_back(prefix[j]*sufix[j]);
        }
        return ans;
    }
};
