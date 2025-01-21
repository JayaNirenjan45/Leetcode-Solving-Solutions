int fib(int n)
{
    if(n==0 || n==1)
     return n;
    int p1=0,p2=1,c;
    for(int i=2;i<=n;i++)
    {
        c = p1+p2;
        p1=p2;
        p2=c;
    }
    return p2;
}