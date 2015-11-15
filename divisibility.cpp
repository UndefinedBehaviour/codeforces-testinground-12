#include <iostream>
#include <string>

using namespace std;
int main(int argc, char *argv[]) {
    unsigned long long k;
    long long a;
    long long b;
    cin >> k >> a >> b;
    long long res = (b - a) / k + 1;
    long long mod = (b-a+1)%k;
    mod += mod % k ? 0 : k;
    if ((a%k+k)%k >= mod)
        cout << res - 1;
    else
        cout << res;
}
