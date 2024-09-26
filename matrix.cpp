/*
    Author: the_noobman
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    int matrix[5][5];
    int oneRow, oneCol;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                oneRow = i + 1;
                oneCol = j + 1;
            }
        }
    }

    int centerRow = 3;
    int centerCol = 3;

    int moves = abs(oneRow - centerRow) + abs(oneCol - centerCol);

    cout << moves << endl;

    return 0;
}

