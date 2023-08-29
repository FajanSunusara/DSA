class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col =matrix[0].size();
        vector<vector<int> >temp(row, vector<int>(col));
       // vector<vector<int>> temp;
        for(int i=0;i<col;i++){
            for(int j=0;j<row;j++){
                temp[j][row-1-i]=matrix[i][j];
            }

        }
        matrix=temp;
    }
};
