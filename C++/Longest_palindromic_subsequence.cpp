// Contributed by: Yogesh_729 (www.github.com/Yogesh_729)

#include<iostream>
#include<algorithm>
using namespace std;

// the same code with the addition of a dp matrix can be used in the top down approach as well

int lcs(string a, string b, int n, int m)
{
if(n==0||m==0)
return 0;

else if(a[n-1]==b[m-1])
return 1+lcs(a,b,n-1,m-1);

else return max(lcs(a,b,n-1,m), lcs(a,b,m-1,n));
}
int main()
{
string a;
cin>>a;
string b=a;
reverse(b.begin(), b.end());

//  here we are taking the reverse with the lcs because in the reverse string also the longest palindromic subsequence wont change.

int getmaxlen=lcs(a,b,a.length(),b.length());
cout<<getmaxlen;

return 0;
}