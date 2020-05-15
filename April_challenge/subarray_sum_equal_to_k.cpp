// initution for this approach is to the commulative array sum where we can find the sum between to range inside the array
// sum(i,j)=sum(j,0)-sum(i,0)
//we can hash map for storig the cummulative sum 
//Time Complexity--> O(n) Space Complexity--->O(n)
class Solution {
public:
    int subarraySum(vector<int>& v, int k) {
       unordered_map<int,int> m;
       int sum=0,r=0;
       m[0]=1;
       for(auto x:v)
       {
       sum+=x;
       r+=m[sum-k]; 
       m[sum]++;
       }
       return r;
    }
};
