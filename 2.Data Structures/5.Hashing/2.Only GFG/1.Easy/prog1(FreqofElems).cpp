//Frequencies of Limited Range Array Elements

//gfg: https://practice.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/0

    void frequencyCount(vector<int>& arr,int N, int P)
    { 
        // code here
        unordered_map<int,int> freq;
        
        for(int i=0;i<N;i++){
            freq[arr[i]]++;
        }
        
        for(int i=0;i<N;i++){
            arr[i] = freq[i+1];
        }
        //cout<<endl;
    }

//refer for more optimized solns: https://www.geeksforgeeks.org/find-frequency-of-each-element-in-a-limited-range-array-in-less-than-on-time/
