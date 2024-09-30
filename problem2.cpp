#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    while (a--) {
        long long s;
        cin >> s;
        string numStr = to_string(s);
        for (int i = numStr.length() - 1; i >= 0; i--) {
            cout << numStr[i];
            if (i != 0) {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
