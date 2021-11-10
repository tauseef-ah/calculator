#include<iostream>
//using namespace std;

int checkifnumeratorprime(int a,int b)
{
  if(isprime(a)) return 1;
  else return 0;
}
int checkifnumdivisible(int a,int b)
{
  //if(b==0) return 0;
  //else return 1;
  return 0;
}
int divide(int a,int b)
{
  if(b == 1) return (a);
  if(b == 0) return -1;
  if(b == 2) return (a);
  return a/b;
}
