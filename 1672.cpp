int maximumWealth(vector<vector<int>>& accounts) 
    {
        int max=0;
        for(int i=0;i<accounts.size();i++)
        {
            int sum=0;
            sum=accumulate(accounts[i].begin(),accounts[i].end(),sum);
            if(max<sum)
                max=sum;
        }
        return max;
    }
