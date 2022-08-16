#include<iostream>
using namespace std;
int main()
{
    int X,digit_1st;
    cin >> X;
    if (999<X&&X<=9999){

    digit_1st=X/1000;
    if (digit_1st%2==0){
        cout <<"EVEN"<<'\n';
    }else {
    cout << "ODD"<<'\n';
    }
    }

    return 0;
}
