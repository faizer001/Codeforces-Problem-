#include<iostream>
#include<string>
using namespace std;
int main(){
int n;
cin>>n;
int x=0;
string s;
while(n--)
{
cin>>s;
if(s=="X++"||s=="++X") x++;
else x--;
}
cout<<x--;
}
