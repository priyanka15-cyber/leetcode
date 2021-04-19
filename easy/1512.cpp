 int numIdenticalPairs(vector<int>& nums) 
    {
        unordered_map<int,int> m;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=m[nums[i]];
            m[nums[i]]++;
        }
        return sum;
    }
