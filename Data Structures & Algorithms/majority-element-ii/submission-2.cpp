class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n1,c1=0,n2,c2=0,n=nums.size();
        for(int i:nums){
            if(i==n1){
                c1++;
            }
            else if(i==n2){
                c2++;
            }
            else if(c1==0){
                n1=i;
                c1=1;
            }
            else if(c2==0){
                n2=i;
                c2=1;
            }
            else{
                c1--;
                c2--;
            }
        }
        vector<int> a;
        if(c1>n/3 && c2>n/3){
            a.push_back(n1);
            a.push_back(n2);
        }
        else{
            c1=0;c2=0;
            for(int i:nums){
                c1+=i==n1?1:0;
                c2+=i==n2?1:0;
            }
            if(c1>n/3)
                a.push_back(n1);
            if(c2>n/3)
                a.push_back(n2);
        }
        return a;
    }
};