#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int N,X,c1 = 0,c2 = 0,c3 = 0,c4 = 0;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> X;

        if(X%2 == 0)
            c1++;
        else
            c2++;

        if(X>0)
            c3++;
        else if(X<0)
            c4++;
    }
    
    cout << "Even: " << c1 << endl;
    cout << "Odd: " << c2 << endl;
    cout << "Positive: " << c3 << endl;
    cout << "Negative: " << c4 << endl;

    return 0;
}
