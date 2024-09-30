#include <iostream>
using namespace std;
int main() {
    int n,x;
    cin>>n>>x;
    if(n==1||n==2){
        cout<<1<<endl;
    return 0;
}
    int d=1;
n-=2;
    d+=(n-1)/x;
    cout<<d<<endl;
    return 0;

}

