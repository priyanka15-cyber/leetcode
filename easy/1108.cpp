 string defangIPaddr(string a)
    {
        string temp="";
        for(int i=0;i<a.length();i++)
        {
            if(a[i]=='.')
                temp+="[.]";
            else
                temp+=a[i];
        }
        return temp;
    }
