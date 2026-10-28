class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(auto num : nums){
            mp[num]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto x : mp){
            pq.push({x.second,x.first});
        }
        int cnt = 0;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
            cnt++;
            if(cnt == k) break;
        }
        return ans;
    }
};