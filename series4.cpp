//(1/2+2/3+3/4+.............+n/(n+1)
#include <iostream>
using namespace std;

int main() {
    int n;
    double sum = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
        sum += (double)i / (i + 1);

    cout << sum;
    return 0;
}