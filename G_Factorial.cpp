#include <bits/stdc++.h>
using namespace std;

long long int fact(int n)
{
    if(n==0 || n==1)
        return 1;
    return n * fact(n-1);
}

int main() 
{
    int T;
    cin >> T;
    while(T--)
    {
        int N;
        cin >> N;
        cout << fact(N) << endl;
    }
    return 0;
}