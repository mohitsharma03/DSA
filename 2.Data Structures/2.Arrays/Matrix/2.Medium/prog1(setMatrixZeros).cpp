//Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.Set Matrix Zeroes

//leetcode: https://leetcode.com/problems/set-matrix-zeroes/description/
//gfg: https://practice.geeksforgeeks.org/problems/boolean-matrix-problem-1587115620/1

    void setZeroes(vector<vector<int>>& matrix) {
        int rows=matrix.size();int cols=matrix[0].size();
        vector<int> rowArr(rows,-1);vector<int> colArr(cols,-1);
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(matrix[i][j]==0){
                    rowArr[i]=0;
                    colArr[j]=0;
                }
            }
        }

        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(rowArr[i]==0 || colArr[j]==0)    matrix[i][j]=0;
            }
        }
    }
//Ref: https://takeuforward.org/data-structure/set-matrix-zero/

/*******************************************************************************/
//Other variation: Make Zeroes
//gfg: https://bit.ly/3SVaSig

    void MakeZeros(vector<vector<int> >& matrix) {
        int rows=matrix.size();int cols=matrix[0].size();
        vector<vector<int>> res = matrix;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(matrix[i][j]==0){
                    int up,down,left,right;
                    if(i==0)    up=0;
                    else{
                        up = matrix[i-1][j];
                        res[i-1][j] = 0;
                    }
                    if(j==0)    left=0;
                    else{
                        left = matrix[i][j-1];
                        res[i][j-1] = 0;
                    }
                    if(i==rows-1)   down=0;
                    else{
                        down = matrix[i+1][j];
                        res[i+1][j] = 0;
                    }
                    if(j==cols-1)   right=0;
                    else{
                        right = matrix[i][j+1];
                        res[i][j+1] = 0;
                    }
                    res[i][j] = up+down+left+right;
                }
            }
        }

        matrix=res;
    }