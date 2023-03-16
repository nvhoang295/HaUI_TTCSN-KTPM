#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("unroll-all-loops")
#pragma GCC optimize("O3")

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE

#define For(i, b, e, s) for (int i = (b); (s) > 0 ? i < (e) : i > (e); i += (s))
#define Fore(e) For(i, 0, e, 1)
#define Forbe(b, e) For(i, b, e, 1)
#define Forbes(b, e, s) For(i, b, e, s)
#define Foribes(i, b, e, s) For(i, b, e, s)
#define Each(x, a) for (auto &x : a)

#define vt vector
#define vl vector<ll>
#define vi vector<int>
#define vs vector<string>
#define pb push_back
#define eb emplace_back
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()
#define Sort(v) sort(all(v))

#define mp make_pair
#define pll pair<ll, ll>
#define pli pair<ll, int>
#define pil pair<int, ll>
#define pii pair<int, int>

#define endl "\n"
#define tab "\t"
#define sp " "

#define track1(a) cout << #a << ": " << (a) << endl
#define track2(a, b)                                                           \
    cout << #a << ": " << (a) << " | " << #b << ": " << (b) << endl
#define track3(a, b, c)                                                        \
    cout << #a << ": " << (a) << " | " << #b << ": " << (b) << " | " << #c     \
         << ": " << (c) << endl
#define track4(a, b, c, d)                                                     \
    cout << #a << ": " << (a) << " | " << #b << ":" << (b) << " | " << #c      \
         << ":" << (c) << " | " << #d << ": " << (d) << endl

template <class T> void read(T &x) { cin >> x; }
template <class H, class... T> void read(H &h, T &...t) {
    read(h);
    read(t...);
}

template <class T> void write(T &x) { cout << x << sp; }
template <class H, class... T> void write(H &h, T &...t) {
    write(h);
    write(t...);
}

#define sqr(x) ((x) * (x))
#define yesno(x) cout << ((x) ? "YES" : "NO") << endl
#define mlt(t)                                                                 \
    int t;                                                                     \
    read(t);                                                                   \
    while (t--)

mt19937 mt_rng(chrono::steady_clock::now().time_since_epoch().count());
ll randint(ll a, ll b) { return uniform_int_distribution<ll>(a, b)(mt_rng); }

int fibo(int n) {
    if (n == 1 || n == 2)
        return 1;
    return fibo(n - 1) + fibo(n - 2);
}

auto solve() {
    int i = 1;
    int step = 1;
    int count = 0;
    while (i <= 180) {
        // track2(i, step);
        cout << i << sp;
        i += step;
        step += 1;
        ++count;
    }
    cout << endl;
    cout << "Number of review: " << count << endl;
    i = 1;
    count = 0;
    cout << endl;
    while (fibo(i) <= 180) {
        cout << fibo(i) << sp;
        ++i;
        ++count;
    }
    cout << endl;
    cout << "Number of review: " << count << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // mlt(t) {
    solve();
    //}
    return 0;
}