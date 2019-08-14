#include <iostream>
#include <cmath>
#include <array>
using namespace std;

int main() {
    array<array<bool,8>,8> place;
    for (int i=0; i<8; i++) {
        for (int j=0; j<8; j++) {
            place[i][j] = true;
        }
    }
    array<array<int,2>,3> queen;
    int index = 0;
    for (int i=0; i<8; i++) {
        string str;
        cin >> str;
        for (int j=0; j<8; j++) {
            if (str[j]=='Q') {
                queen[index][0] = i;
                queen[index][1] = j;
                for (int k=0; k<8; k++) {
                    for (int l=0; l<8; l++) {
                        if (k==i) place[k][l] = false;
                        if (l==j) place[k][l] = false;
                    }
                }
            }
        }
    }
    if (fabs(queen[0][0]-queen[1][0])==fabs(queen[0][1]-queen[1][1])) cout << "No Answer" << endl;
    if (fabs(queen[0][0]-queen[2][0])==fabs(queen[0][1]-queen[2][1])) cout << "No Answer" << endl;
    if (fabs(queen[1][0]-queen[2][0])==fabs(queen[1][1]-queen[2][1])) cout << "No Answer" << endl;

    int cnt = 0;
    for (int i=0; i<8; i++) {
        for (int j=0; j<8; j++) {
            if (place[i][j]) cnt++;
        }
    }
    if (cnt>=5) cout << "Answer" << endl;
}
