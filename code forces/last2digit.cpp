#include<iostream>
using namespace std;
int main()
{
   long long M,N;
   cin >> M>> N;

   int for_M_last_digit=M%10;
   int for_N_last_digit=N%10;
    int sum=(for_M_last_digit+for_N_last_digit);
    cout << sum <<'\n';
    return 0;
}
