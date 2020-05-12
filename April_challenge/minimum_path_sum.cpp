// we use the dynamic programming for this problem 
// we use bottom up approach where we can assume that m-1,n-1 indexes have the minimum sum path cell like that we coninue to do so by taking the
// minimum cell between min(dp(i+1,j),dp(i,j-1))+A(i,j)
// Time Complexity----> O(M*N) Sapce Complexity---> O(N*M)
class Solution {
public:
    int minPathSum(vector<vector<int>>& v) {
        int m=v.size();
        int n=v[0].size();
        vector<vector<int>> ans(m,vector<int>(n));
        ans[m-1][n-1]=v[m-1][n-1];
        for(int i=m-2;i>=0;i--)
            ans[i][n-1]=ans[i+1][n-1]+v[i][n-1];
        for(int j=n-2;j>=0;j--)
            ans[m-1][j]=ans[m-1][j+1]+v[m-1][j];
        for(int i=m-2;i>=0;i--)
        {
            for(int j=n-2;j>=0;j--)
            {
                ans[i][j]=min(ans[i][j+1],ans[i+1][j])+v[i][j];
            }
        }
      return ans[0][0];
    }
};
