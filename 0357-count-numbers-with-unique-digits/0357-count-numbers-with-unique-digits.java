class Solution {
    public int countNumbersWithUniqueDigits(int n) {
        int temp = 1;
        if(n>0){
            for(int i=0; i<n; i++){
                int p = 1;
                for(int j=0; j<=i; j++){
                    if(j==0){
                        p*=9;
                    }
                    else{
                        p*=10-j;
                    }
                }
                temp += p;
            }
        }
        return temp;
    }
}