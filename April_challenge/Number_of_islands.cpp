// we can use dfs for this approach
// we can only target 1's and do dfs on them and keep counting the islands
// Time Complexity ---> O(V+E)    Space Complexity---> O(1)
class Solution {
public:
  
    int numIslands(vector<vector<char>>& v) {
         if(v.empty())
            return 0;
       int m=v.size();
       int n=v[0].size();
        
        int ans=0;
       
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(v[i][j]=='1')
                {
                    dfs(v,m,n,i,j);
                    ans++;
                }
            }
        }
        return ans;
    }
    
      void dfs(vector<vector<char>> &v,int m,int n,int i,int j)
    {
        if(i>=m || i<0 || j>=n || j<0 || v[i][j]=='0')
            return ;
        v[i][j]='0';
        dfs(v,m,n,i-1,j);
        dfs(v,m,n,i+1,j);
        dfs(v,m,n,i,j+1);
        dfs(v,m,n,i,j-1);
    }
};
