/*Take as input str, a string. A “twin” is defined as
 two instances of a char separated by a char. 
E.g. "AxA" the A's make a “twin”. “twins” can overlap,
 so "AxAxA" contains 3 “twins” - 2 for A and 1 for x. 
Write a function which recursively counts number of “twins”
 in a string. Print the value returned.*/
#include<iostream>
using namespace std;
void twins(string str,int spos,int &count,int n){
	if(spos==n-2)
	  return;
	if(str[spos]==str[spos+2])
	  {
	  count=count+1;
	  //cout<<count<<endl;
	}
	twins(str,spos+1,count,n);
}
int main(){
	string str;
	cin>>str;
	int n=str.length();
	int count=0;
    twins(str,0,count,n);
	cout<<count;
	return 0;	
}
