#include <iostream>

using namespace std;

int main()
{   int n1,n2,i=1,k=1;
    //cout << " n1 n2" << endl;
    cin >> n1 >>n2;
    while(i<=n1)
    {
        if(((3*k+2)%n2)!=0)
        {
            cout <<3*k+2<<endl;
            i++;
        }
        k++;
    }

    return 0;
}
