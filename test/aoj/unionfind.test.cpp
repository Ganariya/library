#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/all/DSL_1_A"

#include "../../include.hpp"
#include "../../datastructure/unionfind.hpp"

int main() {

    int n, q;
    cin >> n >> q;

    UnionFind UF(n);
    while (q--) {
        int c, x, y;
        cin >> c >> x >> y;
        if (c == 0) UF.unite(x, y);
        else {
            cout << UF.same(x, y) << endl;
        }
    }
}