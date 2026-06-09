#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int X[100000];
    for(int i = 0; i <= 100000-1; i++)
    {
        cin >> X[i];
    }
    for(int i = 0; i <= 100000-1; i++)
    {
        if(X[i] == 1999)
        {
            cout << "Correct" << endl;
            break;
        }
        else 
        {
            cout << "Wrong" << endl;
        }
    }
    return 0;
}
