

//gfg: https://bit.ly/3PqpeV8
//leetcode: https://leetcode.com/problems/rotate-image/

//gfg soln:
void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        int matNew[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int ind1=n-1-i;int ind2=n-1-j;
                matNew[i][j] = matrix[j][ind1];
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                //int ind1=n-1-i;int ind2=n-1-j;
                matrix[i][j] = matNew[i][j];
            }
        }
    } 

//leetcode soln:
void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int matNew[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int ind1=n-1-i;int ind2=n-1-j;
                matNew[i][j] = matrix[ind2][i];
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                //int ind1=n-1-i;int ind2=n-1-j;
                matrix[i][j] = matNew[i][j];
            }
        }
    }