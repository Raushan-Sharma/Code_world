/*subset_problem(Recursion)*/
#include<iostream>
#include<cstring>
using namespace std;
//const int n;  
void subset(char ch[],int sPos,char out[],int oPos)
 {
 if(ch[sPos]=='\0')
 {
 	out[oPos]='\0';
	cout<<out<<endl;
	return;	
 }
 out[oPos]=ch[sPos];
 subset(ch,sPos+1,out,oPos+1);
 subset(ch,sPos+1,out,oPos);
 
 	
 	
 }
 int main()
{
	char ch[]="abc";
	char out[100];
	//string str[n];
	subset(ch,0,out,0);
	return 0;
}
