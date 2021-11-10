#include<iostream>
//using namespace std;

int checkifnumdivisible(int a,int b)
{
  if(b==0) return 0;
  else return 1;
}
int divide(int a,int b)
{
  if(b == 1) return (a);
  if(b == 0) return -1;
  return a/b;
}
