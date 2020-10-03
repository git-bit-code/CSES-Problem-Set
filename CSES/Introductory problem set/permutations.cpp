//Question: https://cses.fi/problemset/task/1070
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
    //cout << endl;
    for (auto item : vec)
    {
        cout << item << " ";
    }
    cout << endl;
}

int main()
{
    ll n;
    cin >> n;
    vl arr;
    if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION";
        return 0;
    }
    if (n == 4)
    {
        cout << "2 4 1 3";
        return 0;
    }
    for (ll i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
        else
        {
            arr.push_back(i);
        }
    }
    print_vector(arr);
    return 0;
}