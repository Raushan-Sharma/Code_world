#include<iostream>
using namespace std;
int *Allindex(int arr[],int spos,int num,int size,int out[],int &opos)
{
 if(spos>size-1)	
    return out;
  if(arr[spos]==num)
   {
   	out[opos]=spos;
   	//cout<<out[opos];
   	opos=opos+1;
   }
Allindex(arr,spos+1,num,size,out,opos);
return out;
}
int main()
{
int size;
    
	cin>>size;
	int *arr=new int[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	int *out=new int[size];
	int opos=0;
	int num;
	cin>>num;
    Allindex(arr,0,num,size,out,opos);
    //cout<<"i am out of function"<<opos<<endl;
    for(int i=0;i<opos;i++){
    	   cout<<out[i]<<" ";
	}
	delete arr;
	delete out;
    return 0;		
}
