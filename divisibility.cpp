#include <iostream>
#include <string>

using namespace std;
int main(int argc, char *argv[]) {
    unsigned long long k;
    long long a;
    long long b;
    cin >> k >> a >> b;
    cout << (b - a) / k + 1;
    return 0;
}