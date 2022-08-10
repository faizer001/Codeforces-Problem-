#include<iostream>
using namespace std;
int main()
{
    long long A,B,C;
    cin >> A>>B>>C;
    if(-100000<=A&&A<=100000)
        if(-100000<=B&&B<=100000)
            if(-100000<=C&&C<=100000)
            {
                if (A>B&&A>C)
                {

                    if(B>C)
                    {
                        cout <<C<<" ";
                    }
                    else
                    {
                        cout <<B<<" ";
                    }
                    cout <<A;
                }
                else if (B>A&&B>C)
                {
                    if(A>C)
                    {
                        cout <<C<<" ";
                    }
                    else
                    {
                        cout <<A<<" ";
                    }
                    cout <<B<<" ";
                }
                else
                {
                    if(A>B)
                    {
                        cout <<B<<" ";
                    }
                    else
                    {
                        cout <<A<<" ";
                    }
                    cout <<C<<" ";
                }
            }
    return 0;
}
