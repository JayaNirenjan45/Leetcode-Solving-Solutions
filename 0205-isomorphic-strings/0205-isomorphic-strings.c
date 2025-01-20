bool isIsomorphic(char* s, char* t) {
    char m1[256] = {0};
    char m2[256] = {0};

    int len = strlen(s);

    if(strlen(s) != strlen(t)){
        return false;
    }

    for(int i = 0; i < len; i++)
    {
        if(m1[s[i]] != m2[t[i]])
        {
            return false;
        }
        m1[s[i]] = i + 1;
        m2[t[i]] = i + 1;
    }
    return true;
}