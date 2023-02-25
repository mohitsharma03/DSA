//Union of Arrays
//Ref: https://takeuforward.org/data-structure/union-of-two-sorted-arrays/

/************************************************************/
//Union of Two Sorted Arrays
//gfg: https://practice.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1

    vector<int> findUnion(int arr1[], int arr2[], int n, int m){
          int i = 0, j = 0; 
          vector < int > Union;
          while (i < n && j < m) {
            if (arr1[i] <= arr2[j]) {
              if (Union.size() == 0 || Union.back() != arr1[i]) Union.push_back(arr1[i]);
              i++;
            } 
            else{
                if (Union.size() == 0 || Union.back() != arr2[j]) Union.push_back(arr2[j]);
                j++;
            }
          }
          while (i < n){
            if (Union.back() != arr1[i])    Union.push_back(arr1[i]);
            i++;
          }
          while (j < m){
            if (Union.back() != arr2[j])    Union.push_back(arr2[j]);
            j++;
          }
          return Union;
    }

/************************************************************/
//Union of two arrays:
//https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1

    int doUnion(int arr1[], int n, int arr2[], int m)  {
          sort(arr1,arr1+n);sort(arr2,arr2+m);
          int i = 0, j = 0; 
          vector < int > Union;
          while (i < n && j < m) {
            if (arr1[i] <= arr2[j]) {
              if (Union.size() == 0 || Union.back() != arr1[i]) Union.push_back(arr1[i]);
              i++;
            } 
            else{
                if (Union.size() == 0 || Union.back() != arr2[j]) Union.push_back(arr2[j]);
                j++;
            }
          }
          while (i < n){
            if (Union.back() != arr1[i])    Union.push_back(arr1[i]);
            i++;
          }
          while (j < m){
            if (Union.back() != arr2[j])    Union.push_back(arr2[j]);
            j++;
          }
          return Union.size();
    }