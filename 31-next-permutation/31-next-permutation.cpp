class Solution {
public:
    void nextPermutation(vector<int>& nums) {
      int n = nums.size();
      if(n==1) 
            return;
      int i=1;
      int lastInc=-1;
      while(i<n){
            if(nums[i]>nums[i-1])
                lastInc=i;
            i+=1;
        }
        
           if (lastInc < 0)
    {
        reverse(nums.begin(), nums.end());
        return;
    }
        int mn=nums[lastInc];
        int index=lastInc;
    for(i=lastInc;i<n;i++){
        if(nums[i]>nums[lastInc-1] && nums[i]<nums[index]){
            index=i;
        }
    }   
        swap(nums[lastInc-1],nums[index]);
        sort(nums.begin()+lastInc,nums.end());
    }
    
};