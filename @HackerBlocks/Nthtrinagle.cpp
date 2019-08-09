/*Take as input N, a number. Write a recursive function to find Nth triangle where 1st triangle is 1, 2nd triangle is 1 + 2 = 3, 
3rd triangle is 1 + 2 + 3 = 6, so on and so forth. 
Print the value returned.*/
#include<iostream>
using namespace std;
int Nthtriangle(int n){
	if(n==0)
	return 0;
	
	return n+Nthtriangle(n-1);
}
int main()
{
	int n;
	cin>>n;
	cout<<Nthtriangle(n);
	return 0;
}
