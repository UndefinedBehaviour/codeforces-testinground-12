#include <iostream>
#include <string>

using namespace std;
int main(int argc, char *argv[]) {
    unsigned long long k;
    long long a;
    long long b;
    cin >> k >> a >> b;
    long long res = (b - a) / k;
    if ((a >= 0 ? a % k : -a % k) + (b >= 0 ? b % k : -b % k) < k)
        cout << res + 1;
    else
        cout << res;
}
