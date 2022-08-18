#include<iostream>
using namespace std;
int main()
{
    int A,B;
    char S;
    cin>>A>>S>>B;

    if(S=='>')
    {
        if(A>B)
        {
            cout<<"Right\n";
        }
        else
        {
            cout<<"Wrong\n";
        }
    }
    else if(S=='<')
    {
        if(A<B)
        {
            cout <<"Right\n";
        }
        else
        {
            cout <<"Wrong\n";
        }
    }
    else
    {
        if(A==B)
        {
            cout <<"Right\n";
        }
        else
        {
            cout <<"Wrong\n";
        }
    }
    return 0;
}
