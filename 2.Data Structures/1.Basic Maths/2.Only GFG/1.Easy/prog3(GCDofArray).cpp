//GCD of Array
//gfg: https://practice.geeksforgeeks.org/problems/gcd-of-array0614/1

//T=O(NlogN),S=O(1), N=largest elem of array
int findGCD(int a,int b){
        if(a%b==0)  return b;
        return findGCD(b,a%b);
    }
    int gcd(int n, int arr[])
    {
    	int res=arr[0];
    	for(int i=1;i<n;i++){
    	    res = findGCD(res,arr[i]);
    	    if(res==1)  return 1;
    	}
    	return res;
    }