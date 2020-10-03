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
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (b < a)
        {
            ll temp = b;
            b = a;
            a = temp;
        }
        if ((2 * a) < b)
        {
            cout << "NO\n";
        }
        else if ((2 * a) == b)
        {
            cout << "YES\n";
        }
        else
        {
            a %= 3;
            b %= 3;
            if (b < a)
            {
                ll temp = b;
                b = a;
                a = temp;
            }
            if (a == 0 && b == 0)
            {
                cout << "YES\n";
            }
            else if (a == 1 && b == 2)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}