#include<iostream>
using namespace std;
int main()
{
    int A,B;
    char S;
    cin >>A>>S>>B;
    if ((1<=A&&A<=10000)&&(1<=B&&B<=10000)){
    if (S=='+'){
        cout <<A+B<<'\n';
    }
    else if (S=='-'){
        cout << A-B<<'\n';
    }
    else if (S =='*'){
        cout << A*B<<'\n';
    }
    else if (S=='/'){
        cout << A/B<<'\n';
    }

    }
    return 0;
}
