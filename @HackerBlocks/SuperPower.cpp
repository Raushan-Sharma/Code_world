#include<iostream>
using namespace std;
int main() {
    int p,n,i,result=1;
    cout << "enter no and power";
    cin >> n >> p;
    for(i=1;i<=p;i++)
    {
      result=result*n;

    }
    cout <<result;
	return 0;
}
