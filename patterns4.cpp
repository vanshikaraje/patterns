#include<bits/stdc++.h>
using namespace std;
void print3(int n){
    for(int i=1 ;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<< endl;
    }
}
int main(){
    int n;
    cout<<" enter the value of n"<< endl;
    cin>>n;
    print3(n);
}