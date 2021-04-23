 bool checkIfPangram(string s)
    {
        int ch[26]={0};
        for(int i=0;i<s.length();i++)
            ch[s[i]-'a']=1;
        for(int i=0;i<26;i++)
            if(ch[i]==0)
                return false;
        return true;
    }
