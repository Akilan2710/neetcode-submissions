class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        if(k==arr.size()){
            return arr;
        }
        int idx=0,n=arr.size();
        for(int i=1;i<n;i++){
            if(x-arr[i]<=0){
                break;
            }
            idx=i;
        }
        if(abs(x - arr[idx]) > abs(x - arr[idx+1])){
            idx++;
        }
        vector<int> res = {arr[idx]};
        int l = idx - 1, r = idx + 1;

        while (res.size() < k) {
            if (l >= 0 && r < n) {
                if (abs(x - arr[l]) <= abs(x - arr[r])) {
                    res.push_back(arr[l--]);
                } else {
                    res.push_back(arr[r++]);
                }
            } else if (l >= 0) {
                res.push_back(arr[l--]);
            } else if (r < n) {
                res.push_back(arr[r++]);
            }
        }

        sort(res.begin(), res.end());
        return res;
    }
};