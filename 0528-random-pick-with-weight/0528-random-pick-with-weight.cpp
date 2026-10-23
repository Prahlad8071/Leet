
class Solution {
public:
    vector<int> psum;

    Solution(vector<int>& w) {
        psum.resize(w.size());
        psum[0] = w[0];

        for (int i = 1; i < w.size(); i++) {
            psum[i] = psum[i - 1] + w[i];
        }
    }

    int pickIndex() {
        int total = psum.back();
        int target = 1 + rand() % total;

        return lower_bound(psum.begin(), psum.end(), target)
               - psum.begin();
    }
};
