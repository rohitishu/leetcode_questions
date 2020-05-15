// this problem can be solved using simple maths, we know that if we do AND operation of two number we get the final result on the basis of set bits
// so if we want to do AND operation on an range say [x,y] one way is to go iteratively and do AND operation on all of them but this would fail
//  when we have bigger range. So to optimize this what we can do is to recursively do AND oprn on bigger number y and keep decrementing it
// untill we dont find the x==y or x==0 || y==0
class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
     
        if(m==n)
        return m;
        if(m==0 || n==0)
         return 0;
        n=n&(n-1);
        if(m<=n)
        return rangeBitwiseAnd(m,n);
        else
        return rangeBitwiseAnd(n,m);
    }
};

