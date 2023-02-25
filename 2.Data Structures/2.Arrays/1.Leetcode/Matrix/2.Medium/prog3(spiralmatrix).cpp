//Traversing matrix in spiral form:

//gfg: https://bit.ly/3ppEJ53
//leetcode: https://leetcode.com/problems/spiral-matrix/description/

//driver code not present

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int rows=mat.size();int cols=mat[0].size();
        vector<int> res;
        int k=0;
        int colEnd=cols-1;int rowEnd=rows-1;
        int colStart=0;int rowStart=0;
        while(k<rows*cols){
            for(int i=colStart;i<=colEnd && k<rows*cols;i++){
                res.push_back(mat[rowStart][i]);
                k++;
            }
            rowStart++;

            for(int i=rowStart;i<=rowEnd && k<rows*cols;i++){
                res.push_back(mat[i][colEnd]);
                k++;
            }
            colEnd--;
            
            for(int i=colEnd;i>=colStart && k<rows*cols;i--){
                res.push_back(mat[rowEnd][i]);
                k++;	
            }
            rowEnd--;

            for(int i=rowEnd;i>=rowStart && k<rows*cols;i--){
                res.push_back(mat[i][colStart]);
                k++;
            }
            colStart++;
        }
        return res;
    }
};
