#include<iostream>

using namespace std;

int add(int a,int b)
{
  int* num1 = new int(a);
  int* num2 = new int(b);
  int* m3 = (int*) malloc(sizeof(int));
  delete[] num1; 
  for(int i=0;i<100;i++)
  {
      char* ptr = (char*)alloca(sizeof(int[9]));
  }
  return *num1+*num2;
}
