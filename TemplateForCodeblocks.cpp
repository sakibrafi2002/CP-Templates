/* Bismillahir Rahmanir Raheem
   In the Name of Allah , the Most Compassionate, Most Merciful.*/
/* Author: _MUSAFIR_ */

#include<bits/stdc++.h>
using namespace std;


typedef long long int ll;
typedef pair<ll,ll> pll;
typedef long double ld;



#define     sz(n)         (int)(n).size()
#define     testCase      ll tc;cin>>tc;while(tc--)
#define     endl          '\n'
#define     YES           cout << "YES" << endl
#define     NO            cout << "NO" << endl
#define     Yes           cout << "Yes" << endl
#define     No            cout << "No" << endl
#define     ff            first
#define     ss            second
#define     pb            push_back
#define     mp            make_pair
#define     all(v)        v.begin(), v.end()
#define     rall(v)       v.rbegin(), v.rend()
#define     mxt(v)        *max_element(v.begin(),v.end())
#define     mnt(v)        *min_element(v.begin(),v.end())
#define     print(v)	  for(auto x : v)cout<<x<<' ';cout<<'\n';
#define     optimize()    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define     PI            (2*acos(0))
#define     sp(n,m)		  cout<<fixed<<setprecision(n)<<m<<endl
#define     eps           1e-12
#define     mod           1000000007

// This template is only for debugging purposes...
template < typename F, typename S >ostream& operator << ( ostream& os, const pair< F, S > & p ) {return os << "(" << p.first << ", " << p.second << ")";}
template < typename T >ostream &operator << ( ostream & os, const vector< T > &v ) {os << "{";for(auto it = v.begin(); it != v.end(); ++it) {if( it != v.begin() ) os << ", ";os << *it;}return os << "}";}
template < typename T >ostream &operator << ( ostream & os, const set< T > &v ) {os << "[";for(auto it = v.begin(); it != v.end(); ++it) {if( it != v.begin() ) os << ", ";os << *it;}return os << "]";}
template < typename T >ostream &operator << ( ostream & os, const multiset< T > &v ) {os << "[";for(auto it = v.begin(); it != v.end(); ++it) {if( it != v.begin() ) os << ", ";os << *it;}return os << "]";}
template < typename F, typename S >ostream &operator << ( ostream & os, const map< F, S > &v ) {os << "[";for(auto it = v.begin(); it != v.end(); ++it) {if( it != v.begin() ) os << ", ";os << it -> first << " = " << it -> second ;}return os << "]";}
#define dbg(args...) do {cerr << #args << " : "; _Musafir_(args); } while(0)
clock_t tStart = clock();
#define timeStamp dbg("Execution Time: ", (double)(clock() - tStart)/CLOCKS_PER_SEC)
void _Musafir_ () {cerr << endl;}
template <typename T>void _Musafir_( T a[], int n ) {for(int i = 0; i < n; ++i) cerr << a[i] << ' ';cerr << endl;}
template <typename T, typename ... hello>void _Musafir_( T arg, const hello &... rest) {cerr << arg << ' ';_Musafir_(rest...);}

//get done with thinking, then move to coding. Don't cycle




ll gcd(ll x, ll y){if (y == 0) return x;return gcd(y, x%y);}
ll lcm(ll a, ll b){return (a * b) / gcd(a, b);}
ll fact(ll n){if ((n == 0) || (n == 1))return 1;else return n * fact(n - 1);}
int doubleCmp(double a, double b){if(fabs(a - b) <= 1e-10) return 0;else if(a > b) return 1;else return -1;}
string toBinary(ll num){string a;while(num){if(num % 2)a+='1';else a+='0';num/=2;}reverse(a.begin(),a.end());return a;}
bool isSubstring(string mainString, string subString){if (mainString.find(subString) != string::npos)return true;return false;}
double toRad(double X){return (PI * X) / 180.0;}
double toDeg(double X){if(X < 0)X +=(2*PI);return ((180.0 * X)/PI);}
double fixAngle(double A){return A > 1 ? 1 : (A < -1 ? -1 : A);}
ll nCr(ll n,ll r){r=(n-r<=r) ? n-r : r;ll ans=1;for(ll i=0;i<r;i++){ans*=(n-i);ans/=(i+1);}return ans;}



///Binary Search for finding a number.
/*      ll x,f=0;
        cin>>x;
        ll l=0,r=n-1;
        while(l<=r)
        {
            ll m = (l+r)/2;
            if(a[m] == x){
                f = 1;
                break;
            }
            else if(x < a[m]) r = m-1;
            else l = m+1;
        }
        if(f==1) cout<< "YES"<< endl;
        else cout << "NO" << endl;
*/

/// Binary Search for finding Lower Bound
/*      ll x;
        cin >> x;
        ll l = -1, r = n;
        while (l + 1 < r){
            ll m = (l + r) / 2;
            if (x <= a[m]) r = m;
            else l = m;
        }
        cout << r << endl;
*/

/// Binary Search for finding Upper Bound
/*      ll x;
        cin >> x;
        ll l = -1, r = n;
        while (l + 1 < r){
            ll m = (l + r) / 2;
            if (x < a[m]) r = m;
            else l = m;
        }
        cout << r << endl;
*/




/*=========================================================================*/



void Bismillah()
{
    

}

int main()
{
    optimize();
    testCase
        Bismillah();

    return 0;
}


