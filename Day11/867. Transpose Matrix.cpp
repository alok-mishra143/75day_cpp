/*
Given a 2D integer array matrix, return the transpose of matrix.

The transpose of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indices.


*/

//#solution

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> res(matrix[0].size(), vector<int>(matrix.size()));
        
        for (int i=0;i<matrix.size();i++) {
            for (int j=0;j<matrix[0].size();j++) {
                res[j][i]=matrix[i][j];
            }
        }

        return res;

    }
};