/*Take as input str, a string. Assume that value of a=1, b=2, c=3, d=4, .... z=26. Write
a recursive function (return type void) to print all possible codes for the string. E.g.
for “1123” possible codes are aabc, kbc, alc, aaw, kw.*/
#include<iostream>
#include<cstring>
using namespace std;
int StoI(string str,int n)
{
if(n==0)
   return 0;
return (StoI(str,n-1)*10)+((str[n-1])-48);
}
int CodeDecode(char ch[],int sPos,string str[])
{
	
	
	
	
	
	
	
}
//65+str[i]


int main(){
    char ch[]="1091";
    string str[100];
}

