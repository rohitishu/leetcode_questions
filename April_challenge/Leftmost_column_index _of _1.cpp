//for this question we can do binary search as well as two pointers
// NOTE:  actually binary search is same as two pointer we can apply only on sorted list
// here we can check row wise our 1's column
// Time Complexity---> O(row*log(col)) Space Complexity--> O(1)
int getminleftcol(vector<vector<int>> &v)
{
int m=v.size();
int n=v[0].size();
int ans=n;
for(int i=0;i<m;i++)
{
while(ans>0 and v[i][ans-1]==1)
ans--;
}
if(ans==n)
return -1;
return ans;
}
