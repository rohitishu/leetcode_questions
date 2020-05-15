// at every step take the bigger one (go greedy) and keep track of number of steps 
// steps can be calculate by the current element plus its index number i.e step=A[x]+x;
// Time Complexity-->O(n) Space Complexity--->O(1)
int jump(vector<int> &v)
{
int n=v.size();
if(n==1)
int maxi=v[0],steps=v[0]+0;
for(int i=0;i<n;i++)
{
maxi=max(maxi,v[i]+i);
steps--;
if(steps<0)
return false;
if(steps==0)
steps=maxi-i;
}
if(maxi>=n-1)
return true;
return false;
}
