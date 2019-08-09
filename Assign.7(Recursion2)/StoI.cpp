#include<iostream>
using namespace std;

int StoI(string str,int n)
{
if(n==0)
   return 0;
return (StoI(str,n-1)*10)+((str[n-1])-48);
}
int main()
{
    string str="324";
    int n=str.length();
    cout<<StoI(str,n);
    return 0;

}
