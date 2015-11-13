#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
    unsigned long long k = std::stoull(argv[1]);
    long long a = std::stoll(argv[2]);
    long long b = std::stoll(argv[3]);
    std::printf("%I64d", (b - a) / k + 1);
    return 0;
}