#include<iostream>
using namespace std;
int main()
{
  char ch;
  cin >> ch;
  int cha=ch;
   if(65<=cha&&cha<=90){
    char ch1=ch+32;
    cout << ch1<< '\n';
   }
   else {
    char ch2=ch-32;
    cout << ch2<<'\n';
   }
    return 0;
}
