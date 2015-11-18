#include <iostream>
#include <numeric>

using namespace std;

int n, k, l;
int main (int args, char *argv[]) {
    cin >> n >> k;
    int v[n];
    for(int i = 0; i < n; ++i) cin >> v[i];
    long long m[k+1][n];
    for(int i = 0; i <= k; ++i) m[i][0] = 0;
    for(int i = 0; i < n; ++i) m[0][i] = 1;
    for(int i = 1; i <= k; ++i)
        for(int j = 1; j < n; ++j) {
            m[i][j] = 0LL;
            for(int l = 0; l < j; ++l)
                if(v[l] < v[j])
                    m[i][j] += m[i-1][l];
        }
    cout << accumulate(m[k], m[k]+n, 0LL);
}
