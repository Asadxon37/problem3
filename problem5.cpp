#include <iostream>
using namespace std;
int main() {
    int N, x = 1, y = 0, z = 0;
    cin >> N;
    while (y < N) {
        if (x %3 != 0) {y++;z = x;}
        x++;}
    cout << z << endl;
    return 0;

}