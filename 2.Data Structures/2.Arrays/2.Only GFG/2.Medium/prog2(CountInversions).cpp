//Count Inversions
//gfg: https://bit.ly/3PtLWLM

//ref: https://takeuforward.org/data-structure/count-inversions-in-an-array/

    long long int merge(long long arr[],long long temp[],int left,int mid,int right){
        long long int inv_count=0;
        int i = left;
        int j = mid;
        int k = left;
        while((i <= mid-1) && (j <= right)){
            if(arr[i] <= arr[j]){
                temp[k++] = arr[i++];
            }
            else
            {
                temp[k++] = arr[j++];
                inv_count = inv_count + (mid - i);
            }
        }
    
        while(i <= mid - 1)
            temp[k++] = arr[i++];
    
        while(j <= right)
            temp[k++] = arr[j++];
    
        for(i = left ; i <= right ; i++)
            arr[i] = temp[i];
        
        return inv_count;
    }
  
    long long int merge_Sort(long long  arr[],long long temp[],int left,int right){
        int mid;
        long long inv_count = 0;
        if(right > left)
        {
            mid = (left + right)/2;
    
            inv_count += merge_Sort(arr,temp,left,mid);
            inv_count += merge_Sort(arr,temp,mid+1,right);
    
            inv_count += merge(arr,temp,left,mid+1,right);
        }
        return inv_count;
    }
    
    long long int inversionCount(long long arr[], long long N){
        long long temp[N];
        long long int ans = merge_Sort(arr,temp,0,N-1);
        return ans;
    }
