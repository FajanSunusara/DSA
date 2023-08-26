class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rowSize=matrix.size();
        int colSize=matrix[0].size();

 
    vector<int> rowArray(rowSize, 0);
    vector<int> colArray(colSize, 0);

        for(int i= 0;i<rowSize;i++){
            for(int j= 0;j<colSize;j++){
                if(matrix[i][j]==0){
                    rowArray[i]=1;
                    colArray[j]=1;
                }
            }
        }       
       for(int i= 0;i<rowSize;i++){
             for(int j= 0;j<colSize;j++){
                 if(rowArray[i]==1||colArray[j]==1){
                     matrix[i][j]=0;
                 }    
            }
        }       

        
        
    }
};
