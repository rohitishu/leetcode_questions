// this question can be done by using bineary search but in a differnt way because here we dont know the correct sorted order
// the first task is to find out the the sorted order of the list so to check we have to apply different different cases
// then after finding the sorted order we can divide our whole list into two soted order and perform BS seperately 
// here k will be diving the sorted order into two 
// case 1. check whether the element changing it order from begining --> if A[0]>A[1] then K=0
// case 2. check whether the element changing from the last ---> if A[n-2]>A[n-1] then k=n-1
// case 3 find k applying BS on range 1 to n-2 
// after finding k applying BS in partition l=0,h=k and l=k+1,h=n-1 find x
// Time Complexity---> O(logn) Space Complexity---> O(1)
class Solution {
public:
    int search(vector<int>& v, int x) {
        int n=v.size();
        if(n==0)
            return -1;
        if(n==1)
        {
            if(v[0]==x)
                return 0;
            return -1;
        }
        if(v[0]==x)
            return 0;
        if(v[n-1]==x)
            return n-1;
        int  l=1,h=n-2,k;
        if(v[0]>v[1])
            k=0;
        else if(v[n-2]>v[n-1])
            k=n-1;
        else
        {
            while(l<=h)
            {
                int m=l+(h-l)/2;
                if(v[m]>v[m+1] && v[m]>v[m-1])
                {
                    k=m;
                    break;
                }
                else if(v[m]<v[n-1])
                    h=m-1;
                else if(v[m]>v[n-1])
                    l=m+1;
            }
        }
       int l1=0,h1=k;
        while(l1<=h1)
        {
            int m=l1+(h1-l1)/2;
            if(v[m]==x)
                return m;
            else if(v[m]<x)
                l1=m+1;
            else 
                h1=m-1;
        }
       l1=k+1;
        h1=n-1;
        while(l1<=h1)
        {
            int m=l1+(h1-l1)/2;
            if(v[m]==x)
                return m;
            else if(v[m]<x)
                l1=m+1;
            else 
                h1=m-1;
        }
        return -1;
    }
};
