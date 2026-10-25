class Solution {
public:
    int largestInteger(int num) {
        vector<int>digits;
        vector<int>ans;
        while(num > 0){
            int x = num%10;
            digits.push_back(x);
            num /= 10;
        }
        reverse(digits.begin(),digits.end());
        priority_queue<int>even;
        priority_queue<int>odd;

        for(auto n : digits){
            if(n%2==0) even.push(n);
            else odd.push(n);
        }

        for(auto x : digits){
            if(x%2 == 0) {
                ans.push_back(even.top());
                even.pop();
            }
            else{
                ans.push_back(odd.top());
                odd.pop();
            }
        }

        int n = 0;
        for(auto x : ans){
            n = n*10 + x;
        }
        return n;
    }
};