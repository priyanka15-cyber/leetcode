vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies)
    {
       int n = candies.size();
        int mx = *max_element(candies.begin(), candies.end());
        vector<bool>v(n, false);
        for(int i=0;i<n;i++)
            if(candies[i] + extraCandies >= mx)
                v[i] = true;
        return v;
    }
