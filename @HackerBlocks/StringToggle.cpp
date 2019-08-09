#include <iostream>

using namespace std;

int main()
{
    string str;
    int i=0;//char ch;

    cout << "Enter a string"<< endl;
    cin >>str;
    while(str[i]!='\0')
    {   // cout <<"i am in while";
         if((str[i]<='Z')||(str[i]>='A'))
            {
            cout <<"i am in if";
             str[i]=str[i]+32;
            }
         if((str[i]<='z')||(str[i]>='a')){
            str[i]=str[i]-32;
             cout <<"i am in else";
         }
        i++;
    }
    cout<<str;
return 0;
}
