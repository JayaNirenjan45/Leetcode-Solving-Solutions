class Solution {
public:
    string frequencySort(string s) 
    {
        string res="";
            unordered_map<char,int> freq;
            vector<string>bucket(s.size()+1,"");
            for(int i=0;s[i];i++)
            {
                freq[s[i]]++;
            }
            for(auto& it:freq) {
            int n = it.second;
            char c = it.first;
            bucket[n].append(n, c);
        }
        //form descending sorted string
        for(int i=s.size(); i>0; i--) {
            if(!bucket[i].empty())
                res.append(bucket[i]);
        }
        return res;
    }
};