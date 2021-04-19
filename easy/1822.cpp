int arraySign(vector<int>& nums) 
    {
      int count=0,i=0;
      while(i<nums.size())
      {
          if(nums[i]<0)
              count++;
          else if(nums[i]==0)
              return 0;
          i++;
      }
      return (count%2!=0)?-1:1;
    }
