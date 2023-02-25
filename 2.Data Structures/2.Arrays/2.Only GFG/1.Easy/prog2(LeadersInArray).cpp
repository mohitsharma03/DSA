//Leaders in an array
//gfg: https://bit.ly/3bZqbGc

vector<int> leaders(int arr[], int n){
          vector<int> res;
          int max = arr[n - 1];
          //cout << arr[n - 1] << " ";
          res.push_back(arr[n - 1]);
          for (int i = n - 2; i >= 0; i--)
            if (arr[i] >= max) {
              //cout << arr[i] << " ";
              res.push_back(arr[i]);
              max = arr[i];
            }
          //cout << "\n";
          reverse(res.begin(),res.end());
         return res;
    }

//Ref: https://takeuforward.org/data-structure/leaders-in-an-array/