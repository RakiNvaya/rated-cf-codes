#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a>> b;
        if ((a+b) % 2 == 0)
            cout << "Tonya" << endl;
        else 
            cout << "Burenka" << endl;
    }

    return 0;
}