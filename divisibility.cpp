#include <iostream>
#include <string>

using namespace std;
int main(int argc, char *argv[]) {
    long long k;
    long long a;
    long long b;
    cin >> k >> a >> b;
    long long res = (b - a + 1) / k;
    long long mod = (b-a+1)%k;
    long long mod2 = (a % k + k) % k;
    if (!mod2) mod2 = k;
    if (mod2 > k-mod)
        cout << res + 1;
    else
        cout << res;
}
