class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int i,j;
        for(i=0;i<row;i++){
            for(j=0;j<=i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(i=0;i<row;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
        return;
    }
};