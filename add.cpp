#include<iostream>
using namespace std;

int add(int a,int b)
{
  int* num1 = new int(a);
  int* num2 = new int(b);
  
  return *num1+*num2;
}
