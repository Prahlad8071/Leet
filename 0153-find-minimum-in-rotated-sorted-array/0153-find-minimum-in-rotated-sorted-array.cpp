class Solution {
public:
    int bs(vector<int>&nums){
        int n = nums.size();
        int low  = 0;
        int high = n-1;
        while(low < high){
            int mid = low + (high-low)/2;

            if(nums[high] > nums[mid]){
                high = mid;
            }
            else low = mid+1;
        }
        return nums[low];
    }
    int findMin(vector<int>& nums) {
        return bs(nums);
        return 0;
    }
};