class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<vector<int>>rowdetails(mat.size(),vector<int>(2));
        for(int i=0;i< mat.size();i++){
        int scnt = 0;

        for(auto ele : mat[i]){
            if(ele == 0) break;
            scnt++;
        }
        rowdetails[i][0] = scnt;
        rowdetails[i][1] = i;
    }

    sort(rowdetails.begin(),rowdetails.end(),[](vector<int>& a, vector<int>& b){
        if(a[0]== b[0]) {
            return a[1] < b[1];
        }
        return a[0] < b[0];
    });

    vector<int>ans(k);
    for(int i=0;i<k;i++){
        ans[i] = rowdetails[i][1];
    }
    return ans;
    }
};