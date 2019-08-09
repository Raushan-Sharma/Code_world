/*Take as input str, a string. The string contains a single pair of parenthesis “(..)”.
Write a recursive function which returns the contents between the parenthesis.
E.g. for “  return “abc”. Print the value returned.*/
 #include<iostream>
using namespace std;
void func(string str,int sPos,string out,int oPos)
{
if(str[sPos]=='\0' || str[sPos]==')')
{ out[oPos]='\0';
  for(int i=0;i<out.length();i++)
    cout<<out[i];
  return;
}
 if(str[sPos]=='(' && sPos >=1 || oPos >=0)
   {
   	out[oPos]=str[sPos];
   	oPos=oPos+1;
    }	
func(str,sPos+1,out,oPos+1);		
}

int main()
{
	string str="xyss(dfd)sfsdf";
	string out="";
func(str,0,out,0);
	
	return 0;
	
 } 
 
 
 
 
 //if(oPos>0 || sPos>1 && str[sPos-1]==')' )
