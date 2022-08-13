#include<iostream>
using namespace std;
int main(){
   int A,B;cin >> A>>B;
   if (1<=A&&A<=1000000)
   if (1<=B&&B<=1000000){
   if (A%B==0||B%A==0){
    cout << "Multiples"<<'\n';
   }
   else {
    cout <<"No Multiples"<<'\n';
   }
   }
return 0;
}
