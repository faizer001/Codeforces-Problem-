#include<iostream>
using namespace std;
int main()
{
    char X;cin>>X;
    int convert=X;
   if(47<convert&&convert<58){
    cout<<"IS DIGIT\n";
   }
   else if(64<convert&&convert<91){
    cout <<"ALPHA"<<'\n'<<"IS CAPITAL"<<'\n';

   }
   else if(96<convert&&convert<123){
     cout <<"ALPHA"<<'\n'<<"IS SMALL"<<'\n';

   }
}
