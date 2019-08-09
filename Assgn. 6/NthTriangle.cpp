#include<iostream>

 using namespace std;

 int NthTriangle(int n)
 {
  if(n<=1)
    return n;
   int a=NthTriangle(n-1)+a;
   return a;
 }
int main()
{
    cout <<NthTriangle(3);
    return 0;
}
