class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        if(k==arr.size()){
            return arr;
        }
        vector<int> ans(k),temp(k);
        int d=0,j=0;
        for(int i=0;i<k;i++){
            d+=abs(arr[i]-x);
            ans[i]=arr[i];
        }
        int td=d;
        temp=ans;
        for(int i=k;i<arr.size();i++){
            td-=abs(temp[j]-x);
            temp[j]=arr[i];
            td+=abs(temp[j]-x);
            if(td<d){
                ans=temp;
                d=td;
            }
            j++;
            j%=k;
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};