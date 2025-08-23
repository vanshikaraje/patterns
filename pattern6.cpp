#include <bits/stdc++.h>
using namespace std;
void print6(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << " ";
        }
        for(int j =0;j<2*i+1;j++){
            cout<< "*";
        }
        for( int j = 0;j<n-i-1;j++){
            cout<<" ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << " enter the value of n" << endl;
    cin >> n;
    print6(n);
}