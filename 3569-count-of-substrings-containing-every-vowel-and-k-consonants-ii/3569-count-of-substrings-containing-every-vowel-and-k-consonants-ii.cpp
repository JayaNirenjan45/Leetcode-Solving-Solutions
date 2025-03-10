class Solution {
public:
    typedef long long ll;
    ll countOfSubstrings(string word, int k) {
        int n = word.length();
        int vowels[5] = {0};
        int consonants = 0;
        int i = 0;
        int j = 0;
        ll result = 0;
        int leadig_Vowel = 0;

        while(j < n){
            // Count the character if it is vowel or consonants
            if(word[j] == 'a') vowels[0]++;
            else if(word[j] == 'e') vowels[1]++;
            else if(word[j] == 'i') vowels[2]++;
            else if(word[j] == 'o') vowels[3]++;
            else if(word[j] == 'u') vowels[4]++;
            else {
                consonants++;
            }

            // If window have more consonants than K Slide the window
            while(consonants > k){
                leadig_Vowel = 0;
                if(word[i] == 'a') vowels[0]--;
                else if(word[i] == 'e') vowels[1]--;
                else if(word[i] == 'i') vowels[2]--;
                else if(word[i] == 'o') vowels[3]--;
                else if(word[i] == 'u') vowels[4]--;
                else {
                    consonants--;
                }
                i++;
            }

            // If we found exactly K consonants
            if(consonants == k){
                bool flag = true;
                // And all vowels exists atleast once
                if(vowels[0] == 0 || vowels[1] == 0 || vowels[2] == 0 || vowels[3] == 0 || vowels[4] == 0){
                    flag = false;
                }

                if(flag){
                    // If there are vowels at start of window and they are extra ones means 
                    // each vowel can make valid substring so we just count all leading extra vowels
                    // and add it to results and add +1 also to count current valid Substring 
                    while(consonants == k && i <= j){
                        if(word[i] == 'a' && vowels[0] > 1) vowels[0]--;
                        else if(word[i] == 'e' && vowels[1] > 1) vowels[1]--;
                        else if(word[i] == 'i' && vowels[2] > 1) vowels[2]--;
                        else if(word[i] == 'o' && vowels[3] > 1) vowels[3]--;
                        else if(word[i] == 'u' && vowels[4] > 1) vowels[4]--;
                        else {
                            break;
                        }
                        i++;
                        leadig_Vowel++;
                    }
                    result += leadig_Vowel+1;
                }
            }
            j++;
        }
        return result;  
    }
};