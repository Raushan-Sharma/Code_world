#include<iostream>
using namespace std;
bool issorted(int arr[],int n)
{
if(n<=2)
  return true;

bool flag=issorted(arr,n-1);

if(flag && arr[n-1]>=arr[n-2])
      return true;
else
    {
       return false;
    }
}
int main(){
int arr[]={1,2,3,3,4};
cout<<issorted(arr,4);
return 0;
}
