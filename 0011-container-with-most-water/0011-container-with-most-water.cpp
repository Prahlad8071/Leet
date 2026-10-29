class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int l = 0,r = n-1;
        int maxwater = 0;
        while(l < r){
            int width = r-l;
            int currmax = width*min(height[l],height[r]);
            maxwater = max(maxwater,currmax);

            if(height[l]<height[r]) l++;
            else r--;
        }
        return maxwater;
    }
};