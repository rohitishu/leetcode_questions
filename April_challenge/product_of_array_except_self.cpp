//make a precomputed multiplicaton array 
// check for the element contaning zeroes if containing 1 zero then except that inderest index have zero value 
// if number of zero is greater then 1 than all index value will be zero
// otherwise if none of the index containing zero than do multiplication/arr[i]
vector<int> productExceptSelf(vector<int>& v)
 {
 int n=v.size();
 int count=0;
 int mult=1;
 for(int i=0;i<n;i++)
 {
 if(v[i]==0)
 {
  count++;
 }
 else
 {
 mult*=v[i];
 }
 }
 vector<int> ans(n,0);
 if(count>1)
 {
 return ans;
 }
 else if(count==1)
 {
 for(int i=0;i<n;i++)
 {
 if(v[i]==0)
 ans[i]=mult;
 }
 
 }
 else
 {
 for(int i=0;i<n;i++)
 ans[i]=mult/v[i];
 }
 return ans;
 
 }
