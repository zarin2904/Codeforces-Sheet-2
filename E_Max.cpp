#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int N;
    cin >> N;
    int A[N];
    int max = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++)
    {
        if(A[i]>max)
        {
            max = A[i];
        }
    }
    for (int i = 0; i < N; i++)
    {
        cout << max;
        break;
    }
    return 0;
}
