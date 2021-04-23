 int maxProduct(vector<int>& nums) 
    {
        int n=nums.size(); 
        if(n==2) return (nums[0]-1) *(nums[1]-1);
        int index=0,fmax=INT_MIN,smax=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(fmax<nums[i])
            {
                smax=fmax;
                fmax=nums[i];
            }
            else if(smax<nums[i])
            {
                smax=nums[i];
            }
        }
        return (smax-1)*(fmax-1);
    }
