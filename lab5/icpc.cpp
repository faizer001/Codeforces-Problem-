#include<iostream>
using namespace std;
int main()
{
   int A,B;
   cin >> A>> B;
   if ((1<=A&&A<=1000)&&(1<=B&&B<=1000))
   cout << "floor "<<A<<" / "<<B<<" = "<<A/B<<'\n';{
   if (A==B){
      cout << "ceil "<<A<<" / "<<B<<" = "<<(A/B)<<'\n';
   }else{
   cout << "ceil "<<A<<" / "<<B<<" = "<<(A/B+1)<<'\n';
   }
   }
   double c=(double)A/B;
   double check=c-(A/B);
  if (check<0.5){
    cout <<"round "<<A<<" / "<<B<<" = "<<c-check<<'\n';
  }
  else {
     cout <<"round "<<A<<" / "<<B<<" = "<<(A/B+1)<<'\n';
  }
    return 0;
}

