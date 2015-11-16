#include <iostream>
#include <queue>

using namespace std;

int main(int argc, char** argv){
    int a, b, c, r = 0;
    cin >> a;
    priority_queue<pair<int, int> > q;
    for (int i = 0; i < a; ++i) {
        cin >> b >> c;
        q.push(make_pair(b, c));
    }
    const pair<int, int>* p;
    int d = q.top().first;
    q.pop();
    ++r;
    while(!q.empty()) {
        p = &(q.top());
        if (p->second < d) {
            ++r;
            d = p->first;
        }
        q.pop();
    }
    cout << r;
}
