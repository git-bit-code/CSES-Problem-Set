#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

#define mod 1000000007;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef pair<char, int> pci;
typedef pair<int, int> pii;

//Print any vector
template <class class_name>
void print_vector(vector<class_name> vec)
{
    cout << endl;
    for (auto item : vec)
    {
        cout << item << " ";
    }
    cout << endl;
}

int main()
{
    ll n;
    ll cnt = 0;
    cin >> n;
    for (ll i = 5; n / i >= 1; i *= 5)
    {
        cnt += (n / i);
    }
    cout << cnt;
    return 0;
}