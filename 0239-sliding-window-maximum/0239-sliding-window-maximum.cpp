class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();

        priority_queue<pair<int,int>> pq;
        vector<int> ans;

        for(int i = 0; i < n; i++) {

            // Push current element with index
            pq.push({nums[i], i});

            // Remove outdated elements from heap top
            while(!pq.empty() && pq.top().second <= i-k) {
                pq.pop();
            }

            // Window of size k is complete
            if(i >= k-1) {
                ans.push_back(pq.top().first);
            }
        }

        return ans;
    }
}; 