#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

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
    ll num;
    cin >> num;
    cout << 0 << endl;
    for (ll i = 2; i <= num; i++)
    {
        ll s = i * i;
        ll ans = (((s * (s - 1)) / 2) - ((i - 1) * (i - 2) * 4));
        if (i == 2)
        {
            cout << 6 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
    return 0;
}
