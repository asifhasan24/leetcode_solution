class Solution {
public:
     int findMin(vector<int> &num) {
           if(num.size()==1)
                return num[0];
        if (num[0]<num.back())
                return num[0];
        int start=0,end=num.size()-1;
         int ans =INT_MAX;
        
        while (start<=end) {
           
            
            int mid = start+(end-start)/2;
            
            if (num[mid]>=num[0]) {
                start = mid+1;
            } else {
                ans=num[mid] ;
                end = mid-1;
            }
        }
        
        return ans;
    }
};