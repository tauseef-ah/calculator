#include<iostream>
#include <cmath>
bool isprime(int num)
{
  bool isprimenum = true;
  for(int i=2;i< sqrt(num);i++)
  {
    if(num%i == 0)
    {
        isprimenum = false;
        break;
    }
  }
  return isprimenum;
}

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
  if(b == 3) return (a);
  if(b == 2) return (a);
  return a/b;
}
