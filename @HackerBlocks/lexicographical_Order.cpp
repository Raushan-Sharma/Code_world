//Recursion-lexicographical Order
#include<iostream>
using namespace std;
void lexi(int num,int n)
{  int i;

  if(n>num )
      return;
  if(n==0) 
  	i=1;
  else i=0;
for(;i<=9;i++)
	{ 
      int ln=n*10+i;
	  if(ln<num)
	  {	  		
	  	cout<<ln<<endl;	
	  	lexi(num,ln);
      }
      else return;
	}	
}
int main()
{
	int num=26,n=0;
	lexi(num,n);
	return 0;
	
}



