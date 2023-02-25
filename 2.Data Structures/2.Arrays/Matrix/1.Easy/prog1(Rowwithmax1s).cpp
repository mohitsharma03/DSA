//Row with max 1s
//gfg: https://bit.ly/3QNDw2W

	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int maxs = 0;int row=-1;
	    for(int i=0;i<arr.size();i++){
	        int c = 0;
	        for(int j=0;j<arr[0].size();j++){
	            if(arr[i][j]==1)        c++;
	        }
	        if(c>maxs){
	            maxs=c;
	            row=i;
	        }
	    }
	    return row;
	}
