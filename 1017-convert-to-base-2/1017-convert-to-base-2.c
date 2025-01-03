char* baseNeg2(int n) {
    if(n==0)
    {
        char *res=(char *)malloc(2*sizeof(char));
        res[0]='0';
        res[1]='\0';
        return res;
    }
    char buffer[65];
    int i=0;
    while(n!=0)
    {
        int rem=n%-2;
        n/=-2;
        if(rem<0)
        {
            rem+=2;
            n+=1;
        }
        buffer[i++]=rem+'0';
    }
    char *res=(char *)malloc((i+1)*sizeof(char));
    for(int j=0;j<i;j++)
    {
        res[j]=buffer[i-1-j];
    }
    res[i]='\0';
    return res;
}