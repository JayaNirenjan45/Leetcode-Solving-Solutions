bool check(vector < int > &freq){
    if(freq[0] > 0 && freq[1]>0 && freq[2]>0){
        return true;
    }
    return false;
}
class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size() ;
        int start = 0 ;
        vector<int>freq(3,0);
        int ans = 0 ;
        for(int i = 0 ; i < n ; i++){

            freq[ s[ i ] - 'a' ]++;

            if( check( freq ) ){
                while(check(freq)){
                    ans += n - i ;
                    freq[s[start]-'a']--;
                    start++;
                }
            }
        }
        return ans ;
    }
};