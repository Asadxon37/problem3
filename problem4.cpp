#include <iostream>
using namespace std;
int main() {
    int k,x;
    cin>>k>>x;
    if(k<=2) {
        cout<<1<<endl;
    }
    int a=2,b=3;
    while(b+x-1<k) {
        b+=x;
        a++;
    }
    cout<<a<<endl;
    return 0;
}

