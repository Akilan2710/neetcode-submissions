class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=prices[0],p=0;
        for(int i=1;i<prices.size();i++){
            if(l<prices[i]){
                p+=prices[i]-l;
            }
            l=prices[i];
        }
        return p;
    }
};