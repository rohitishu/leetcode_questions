bool isHappy(int n) {
unordered_set<int> s;
while(n!=1)
{
int sum=0,rem;
while(n!=0)
{
rem=n%10;
sum+=rem*rem;
n=n/10;
}
n=sum;
if(s.find(n).end())
return false;
s.insert(n);
}
return true;
}
