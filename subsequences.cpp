#include <iostream>

using namespace std;

int n, k, l;
int main (int args, *char[] argv) {
    cout << n << k;
    int v[n];
    for(int i = 0; i < n; ++i) cin >> v[i];
    int m[k+1][n];
    for(int i = 0; i <= k; ++i) m[i][0] = 0;
    for(int i = 0; i < n; ++i) m[0][i] = 1;
    for(int i = 0; i < k; ++i)
        for(int j = 1; i < n; ++i) {
            m[i][j] = m[k][j-1];
            l = j - 1;
            while(l > -1 && v[l] > v[j]) --l;
            if (l != -1) m[i][j] += m[i - 1][l]
        }
}