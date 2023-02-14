//Count Digits:
//gfg: https://practice.geeksforgeeks.org/problems/count-digits5716/1

int evenlyDivides(int n){
        //code here
        int n1=n;int cnt=0;
        while(n1!=0){
            int r=n1%10;
            if(r!=0 && n%r==0)//tricky part
                cnt++;
            n1=n1/10;
        }
        return cnt;
    }