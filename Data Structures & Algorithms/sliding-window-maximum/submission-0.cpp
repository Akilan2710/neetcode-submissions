class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> ans;
        priority_queue<pair<int,int>> m;
        for(int i=0;i<n;i++){
            m.push({nums[i],i});
            if(i>k-2){
                while(m.top().second <= i-k){
                    m.pop();
                }
                ans.push_back(m.top().first);
            }
        }
        return ans;
    }
};
