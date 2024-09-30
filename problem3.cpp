#include <iostream>
using namespace std;
int main() {
    int N,A,B;
    cin>>N>>A>>B;
    int arr[N];
    int sum=0;

    for(int i=0;i<N;i++) {
        arr[i]=i+1;
        int t=0;
        int k=arr[i];
        while(k>0) {
            t+=k%10;
            k=k/10;
        }
        if(t>=A&&t<=B) {
            sum+=arr[i];
        }
    }cout<<sum<<endl;
    return 0;
}