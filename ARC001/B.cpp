#include <iostream>
#include <cmath>
#include <array>
using namespace std;

int main() {
    int A,B;
    cin >> A >> B;
    A = fabs(A-B);
    std::array<int,3> tmp{1,5,10};
    int cnt = 0;
    while (A) {
        int reg = A;
        for (int i=0; i<3; i++) {
            if (reg>fabs(A-tmp[i])) reg = fabs(A-tmp[i]);
        }
        A=reg;
        cnt++;
    }
    cout << cnt << endl;
}
