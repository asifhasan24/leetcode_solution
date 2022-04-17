class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
         
        int r=matrix.size();
        int c=matrix[0].size();
        int startVal=matrix[0][0],endVal=matrix[r-1][c-1],midVal;
        while(startVal<=endVal)
        {
            midVal=(endVal+startVal)/2;
            int ans=0;
            for(int i=0;i<r;i++)
            {
                int l=0,h=c-1;
                while(l<=h)
                {
                    int m=l+(h-l)/2;
                    if(matrix[i][m]<=midVal) l=m+1;
                    else h=m-1;
                }
                ans+=l;
            }
            if(ans<k) startVal=midVal+1;
            else endVal=midVal-1;
        }
        return startVal;
    }
};