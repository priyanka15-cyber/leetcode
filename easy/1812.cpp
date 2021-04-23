bool squareIsWhite(string c)
    {
        return (c[0]-'a'+1)%2 ^ (c[1]-'0')%2==1?true:false;
    }
