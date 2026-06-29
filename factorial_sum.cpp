#include <iostream>
using namespace std;

int recurFact(int n)
{
    if (n <= 1)
        return n;

    return n * recurFact(n - 1);
}

int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    cout << recurFact(n);
    return 0;
}