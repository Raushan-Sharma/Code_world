#include<iostream>
using namespace std;
bool isContain(int arr[],int size,int num)
{

if(size<0)
    return false;
if(arr[size]==num)
   return true;
else 
return false;
isContain(arr,size-1,num);
return true;
}
int main(){
    
	int size;
	cin>>size;
	int *arr=new int[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	int num;
	cin>>num;
    if(isContain(arr,size-1,num))
	 cout<<"true";
	else
	 cout<<"false";
    delete arr;
return 0;
}
