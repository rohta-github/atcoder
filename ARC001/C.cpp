#include <iostream>
#include <cmath>
#include <array>
using namespace std;

int main() {
    array<string,8> board;
    for (int i=0; i<8; i++) {
        cin >> board[i];
    }
    for (int i=0; i<8; i++) {
        cout << board[i] << endl;
    }
}
