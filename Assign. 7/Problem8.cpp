/*Take as input str, a string.
a. Write a recursive function which counts the number of times ‘hi’ appears in the string. Print the value returned.
b. Write a recursive function which removes all ‘hi’ in the string. Print the value returned.
c. Write a recursive function which replaces all ‘hi’ in the string with ‘bye’. Print the value returned.*/

#include<iostream>
using namespace std;
char *HiBye(char ch[],int rPos,int wPos,int &count)
{
	if(ch[rPos]=='\0')
	{
	 cout<<count<<endl;	
	 for(int i=0;i<(rPos-wPos);i++)
	   ch[wPos]='\0';
	 return ch;
    }
	if(ch[rPos]=='h'&&ch[rPos+1]=='i')
	{
		count=count+1;
	    rPos=rPos+1;
	}
	else
	{
	   ch[wPos]=ch[rPos];
	   wPos=wPos+1;
    }
	char *ch1=HiBye(ch,rPos+1,wPos,count);
	return ch1;
	
}
int main()
{
	char ch[]="ahihidhinhinhifhi";
	int count=0;
	cout<<HiBye(ch,0,0,count);
	return 0;
}
