/* Bismillahir Rahmanir Raheem  */

#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename num_t>
using ordered_set = tree<num_t, null_type, less_equal<num_t>, rb_tree_tag, tree_order_statistics_node_update>;

// find_by_order(k): It returns an iterator to the kth element (counting from zero)
// order_of_key(k) : It returns to the number of items that are strictly smaller than our item k
//  less equal er jaigai less dile set er moto kaj kore ... normally multiset

#define ll long long int
#define ull unsigned long long int
#define sz(n) (int)(n).size()
#define endl '\n'
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define mxt(v) *max_element(v.begin(), v.end())
#define mnt(v) *min_element(v.begin(), v.end())
#define print(v)          \
    for (auto x : v)      \
        cout << x << ' '; \
    cout << '\n';
#define mem(a, b) memset(a, b, sizeof(a))
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define PI (2 * acos(0))
#define LOG(b, v) (log2(v) / log2(b))
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);
#define getunique(v)                                  \
    {                                                 \
        sort(v.begin(), v.end());                     \
        v.erase(unique(v.begin(), v.end()), v.end()); \
    }
#define eps 1e-12
#define mod 1000000007

// This template is only for debugging purposes...
template <typename F, typename S>
ostream &operator<<(ostream &os, const pair<F, S> &p) { return os << "(" << p.first << ", " << p.second << ")"; }
template <typename T>
ostream &operator<<(ostream &os, const vector<T> &v)
{
    os << "{";
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ", ";
        os << *it;
    }
    return os << "}";
}
template <typename T>
ostream &operator<<(ostream &os, const set<T> &v)
{
    os << "[";
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ", ";
        os << *it;
    }
    return os << "]";
}
template <typename T>
ostream &operator<<(ostream &os, const multiset<T> &v)
{
    os << "[";
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ", ";
        os << *it;
    }
    return os << "]";
}
template <typename F, typename S>
ostream &operator<<(ostream &os, const map<F, S> &v)
{
    os << "[";
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ", ";
        os << it->first << " = " << it->second;
    }
    return os << "]";
}
#define dbg(args...)            \
    do                          \
    {                           \
        cerr << #args << " : "; \
        Musafir(args);          \
    } while (0)
clock_t tStart = clock();
#define timeStamp dbg("Execution Time: ", (double)(clock() - tStart) / CLOCKS_PER_SEC)
void Musafir() { cerr << endl; }
template <typename T>
void Musafir(T a[], int n)
{
    for (int i = 0; i < n; ++i)
        cerr << a[i] << ' ';
    cerr << endl;
}
template <typename T, typename... hello>
void Musafir(T arg, const hello &...rest)
{
    cerr << arg << ' ';
    Musafir(rest...);
}

// get done with thinking, then move to coding. Don't cycle

ll gcd(ll x, ll y)
{
    if (y == 0)
        return x;
    return gcd(y, x % y);
}
ll lcm(ll a, ll b) { return (a * (b / gcd(a, b))); }
ll fact(ll n)
{
    if ((n == 0) || (n == 1))
        return 1;
    else
        return n * fact(n - 1);
}
int doubleCmp(double a, double b)
{
    if (fabs(a - b) <= 1e-10)
        return 0;
    else if (a > b)
        return 1;
    else
        return -1;
}
string toBinary(ll num)
{
    string a;
    while (num)
    {
        if (num % 2)
            a += '1';
        else
            a += '0';
        num /= 2;
    }
    reverse(a.begin(), a.end());
    return a;
}
bool isSubstring(string mainString, string subString)
{
    if (mainString.find(subString) != string::npos)
        return true;
    return false;
}
double toRad(double X) { return (PI * X) / 180.0; }
double toDeg(double X)
{
    if (X < 0)
        X += (2 * PI);
    return ((180.0 * X) / PI);
}
double fixAngle(double A) { return A > 1 ? 1 : (A < -1 ? -1 : A); }
ll nCr(ll n, ll r)
{
    r = (n - r <= r) ? n - r : r;
    ll ans = 1;
    for (ll i = 0; i < r; i++)
    {
        ans *= (n - i);
        ans /= (i + 1);
    }
    return ans;
}

bool comp(pair<ll, ll> a, pair<ll, ll> b)
{
    if (a.first == b.first)
        return a.second > b.second;
    else
        return a.first > b.first;
}

/*                 MUSAFIR                     */

void solve()
{
}

int main()
{
    optimize();
    ll tc = 1;
    cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        solve();
    }

    return 0;
}
