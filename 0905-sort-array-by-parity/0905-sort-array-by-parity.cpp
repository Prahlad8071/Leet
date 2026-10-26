class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>ans;
        for(auto num : nums){
            if(num%2 == 0) ans.push_back(num);
        }
        for(auto num : nums){
            if(num%2 == 1) ans.push_back(num);
        }
        return ans;
    }
};