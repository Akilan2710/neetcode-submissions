class Solution {
public:
    int hammingWeight(uint32_t n) {
        int a=0;
        for(int i=0;i<32;i++){
            ((1<<i)&n)>0?a++:0;
        }
        return a;
    }
};
