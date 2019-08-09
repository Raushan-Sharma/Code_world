#include<iostream>
using namespace std;

int SumOfDigit(string str,int index)
{
  if(str[index] == '\0')
      return 0;
int a=int(str[index])-48;
//cout <<"digit is:"<<a<<endl;
int sum=0;
sum=SumOfDigit(str,index +1);
   sum=sum+a;
   return sum;
}
int main(){
string str;
cin>>str;
cout<<SumOfDigit(str,0);

//int a=str[1]-48;
//cout <<a;
return 0;
}
