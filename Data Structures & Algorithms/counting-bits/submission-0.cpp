class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> a(n+1);
        a[0]=0;
        if(n==0){
            return a;
        }
        int x=1;
        for(int i=1;i<=n;i++){
            if(i==x){
                a[i]=1;
                x*=2;
            }
            else{
                a[i]=1+a[i%(x/2)];
            }
        }
        return a;
    }
};
