//Left Rotation:
//gfg: https://bit.ly/3dyCKZg

int gcd(int a,int b){
        if(b==0) return a;
        return gcd(b,a%b);
    }
    void leftRotate(int arr[], int n, int d) {
         d=d%n;
        int g=gcd(n,d);
        for(int i=0;i<g;i++){
            int temp=arr[i];
            int curr = i;
            while(1){
                int next = curr+d;
                if(next>=n) next = next-n;
                if(next==i) break;
                arr[curr] = arr[next];
                curr = next;
            }
            arr[curr] = temp;
        }
    }

//Right Rotatn
//leetcode: https://leetcode.com/problems/rotate-array/

int gcd(int a,int b){
        if(b==0) return a;
        return gcd(b,a%b);
    }
    
    void rotate(vector<int>& arr, int d){
        // code here
        int n=arr.size();
        d=d%n;
        int g=gcd(n,d);
        for(int i=n-1;i>n-1-g;i--){
            int temp=arr[i];
            int curr = i;
            while(1){
                int prev = curr-d;
                if(prev<0) prev = prev+n;
                if(prev==i) break;
                arr[curr] = arr[prev];
                curr = prev;
            }
            arr[curr] = temp;
        }
    }