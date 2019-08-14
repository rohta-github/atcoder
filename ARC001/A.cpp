#include <iostream>
using namespace std;

int main() {
    int N;
    string str;
    cin >> N;
    cin >> str;
    int point_min = N, point_max = 0;
    int point = 0;
    for (int i=0; i<N; i++) {
        if (str[i]=='1') point++;
    }
    if (point<point_min) point_min = point;
    if (point>point_max) point_max = point;
    point = 0;
    for (int i=0; i<N; i++) {
        if (str[i]=='2') point++;
    }
    if (point<point_min) point_min = point;
    if (point>point_max) point_max = point;
    point = 0;
    for (int i=0; i<N; i++) {
        if (str[i]=='3') point++;
    }
    if (point<point_min) point_min = point;
    if (point>point_max) point_max = point;
    point = 0;
    for (int i=0; i<N; i++) {
        if (str[i]=='4') point++;
    }
    if (point<point_min) point_min = point;
    if (point>point_max) point_max = point;

    cout << point_max << " " << point_min << endl;
}
