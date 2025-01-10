int trap(int* h, int n) 
{
    int lm[n],rm[n],res=0;
    lm[0]=h[0];
    for(int i=1;i<n;i++)
     lm[i]=fmax(h[i],lm[i-1]);
    rm[n-1]=h[n-1];
    for(int i=n-2;i>=0;i--)
     rm[i]=fmax(h[i],rm[i+1]);
    for(int i=0;i<n;i++)
     res+=fmin(lm[i],rm[i])-h[i];
    return res;
}