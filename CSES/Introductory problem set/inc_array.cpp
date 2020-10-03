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
    ll n, turns = 0, x;
    vl a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
    }
    if (n != 1)
    {
        for (ll i = 1; i < n; i++)
        {
            if (a[i] < a[i - 1])
            {
                turns += (a[i - 1] - a[i]);
                a[i] += (a[i - 1] - a[i]);
            }
        }
    }
    //print_vector(a);
    cout << turns;
}