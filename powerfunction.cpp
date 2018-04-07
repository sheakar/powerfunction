long long powerfun(long long x,long long n,long long d)
 {
     long long y;
     if(x==0)
     {
         return 0;
     }
     if(n==0)
     {
         return 1;
     }
     else if(n%2==0)
     {
         y=powerfun(x,n/2,d);
         return(y*y)%d;
     }
     else
     {
         return (x*powerfun(x,n-1,d))%d;
     }
     
 }
int powmod(int x, int n, int d) {
    long long result=powerfun(x,n,d);
    if(result < 0)
    {
        return (result+d)%d;
    }
    else
    return result;
}
