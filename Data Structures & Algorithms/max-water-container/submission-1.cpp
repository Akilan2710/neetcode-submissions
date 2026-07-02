class Solution {
public:
    int maxArea(vector<int>& heights) {
        int m=0,i=0,j=heights.size()-1;
        while(i<j){
            m=max(m,min(heights[i],heights[j])*(j-i));
            if(heights[i]<heights[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return m;
    }
};
