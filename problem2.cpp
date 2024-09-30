#include <iostream>
using namespace std;
int main() {
    int a,b=0;
    cin>>a;
    string arr[a];
    while(a>b) {
        cin>>arr[b];
        b++;
    }
    for(int i=0;i<a;i++) {
        for(int j=arr[i].length()-1;j>=0;j-=1) {
            cout<<arr[i].substr(j,1)<<" ";
        }cout<<endl;
    }
    return 0;
}
