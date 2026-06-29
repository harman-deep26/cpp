#include <bits/stdc++.h>
using namespace std;

long power(int x, unsigned n)
{
    long long pow = 1;

    for (int i = 0; i < n; i++) {
        pow = pow * x;
    }

    return pow;
}

int main()
{
   int x,n;
   cout<<"Enter x and n:";
   cin>>x>>n;

    int result = power(x, n);
    cout << result << endl;

    return 0;
}