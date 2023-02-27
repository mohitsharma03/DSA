//Find Missing And Repeating
//gfg: https://bit.ly/3zWZoCs

    int* findTwoElement(int *arr, int n) {
        unordered_map<int, int>count;
        int *result=new int[2];
        
        for(int i=0; i<n; i++)count[arr[i]]++;
        
        for(int i=1; i<=n; i++){
            if(count[i]>1)result[0]=i; //Repeating
            else if(count[i]==0)result[1]=i; //Missing
        }
        
        return result;
    }

//also check:
//https://www.geeksforgeeks.org/find-a-repeating-and-a-missing-number/
//https://takeuforward.org/data-structure/find-the-repeating-and-missing-numbers/