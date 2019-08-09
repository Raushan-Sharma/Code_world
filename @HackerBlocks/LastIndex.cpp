#include<iostream>
using namespace std;
int firstindex(int arr[],int spos,int num,int size)
{
 if(spos>size-1)	
    return -1;
  if(arr[spos]==num)
   return spos;
firstindex(arr,spos+1,num,size);
}
int main()
{
int size;
    
	cin>>size;
	int *arr=new int[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	int num;
	cin>>num;
    cout<<firstindex(arr,0,num,size);
    delete arr;
    return 0;		
}
