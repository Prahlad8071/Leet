class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,n,j;
        n = nums.size();
        vector<int>idx;
        for(i=0;i<n;i++){
          for(j=i+1;j<n;j++){
              if(nums[i]+nums[j]==target){
                 idx.push_back(i);
                 idx.push_back(j);
                 return idx;
              }
          }
        }
        return idx;
    }
};