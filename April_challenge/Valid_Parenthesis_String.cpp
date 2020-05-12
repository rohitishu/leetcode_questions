// we can approach this question by just simple think of counter variable we can take two counter variables one for open bracket the other is for 
// closed bracket nd when ever we encounter any '(' we increment our open bracket counter variable and on the other hand whenever we encounter
// ')' closed bracket we decrement its counter variabel
// but the problem is we have the third case also i.e '*' so we can use for both open and closed bracket so whenever you encounter '*' 
// just increment in open bracket variable and decrement in closed bracket variable.
// Time Complexity ---> O(N)   Space Complexity -----> O(1)
 bool checkValidString(string s) 
 {
 int open_bracket=0;
 int close_bracket=0;
 for(auto i:s)
 {
 open_bracket+=(i=='(' || i=='*')?1:-1;
 close_bracket+=(i==')' || i=='*')?-1:1;
 if(open_bracket<0)
 return false;
 close_bracket=max(0,close_backet);
 
 }
 return close_bracket==0;
 }
