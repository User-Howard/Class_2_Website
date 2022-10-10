//
//  d767.cpp
//  Zerojudge 練習APCS
//
//  Created by 吳浩瑋 on 2022/9/23.
//
#include <iostream>
#include <vector>
using namespace std;


int N, Q;
vector<vector<int > > G;
vector<int > depth;
void debug() {
    cout << '\n';
}
template<class T,class ... U>
void debug(T a, U ... b) {
    cout << a << " ", debug(b...);
}

int LCS(int a, int b) {
    return 0;
}
void walk(int u, int x) {
    depth[u] = x;
    for(int i:G[u])
        walk(i, x+1);
}
void solve() {
    G.clear();
    G.resize(N+1);
    depth.clear();
    depth.resize(N+1);
    for(int i=1;i<=N;++i) {
        int a;
        while(cin >> a and a) {
            G[i].push_back(a);
        }
    }
    walk(1, 0);

}
int main() {
    while(cin >> N >> Q) {
        solve();
    }
    return 0;
}