#include<iostream>
using namespace std;

int main()
{
    int A,B,C;
    cin >>A>>B>>C;
    if((-1000000<=A&&A<=1000000)&&(-1000000<=B&&B<=1000000)&&(-1000000<=C&&C<=1000000)){


        if(A<=B&&A<=C)
        {
            cout<<A<<'\n';
            if(B<=C)
            {
                cout<<B<<'\n';
                cout <<C<<'\n';
            }
            else if(C<=B){
                cout<<C<<'\n';
                cout<<B<<'\n';
            }

            cout<<endl<<A<<'\n'<<B<<'\n'<<C;

        }
        else if(B<=C&&B<=A)
        {
            cout <<B<<'\n';
            if(A<=C){
                cout <<A<<endl;
                cout <<C<<endl;
            }
            else if(C<=A){
                cout<<C<<endl;
                cout <<A<<endl;
            }

            cout<<endl<<A<<'\n'<<B<<'\n'<<C;

        }
        else
        {
            cout<<C<<'\n';
            if(A<=B){
                cout <<A<<'\n';
                cout<<B<<'\n';
            }else if(A>=B){
               cout<<B<<endl;
               cout<<A<<endl;

            }




            cout<<'\n'<<A<<'\n'<<B<<'\n'<<C;

        }
    }

    return 0;
}
