// LCS is a dp problem 
// Time Complexity-->O(n*m) Space Complexity-->O(n*m)
class Solution {
public:
    int longestCommonSubsequence(string s, string t) {
    int m=s.size();
    int n=t.size();
    int lcs[m+1][n+1];
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0||j==0)
            lcs[i][j]=0;
            else if(s[i-1]==t[j-1])
            lcs[i][j]=lcs[i-1][j-1]+1;
            else
            lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
        }
    }
    return lcs[m][n];
    }
};
