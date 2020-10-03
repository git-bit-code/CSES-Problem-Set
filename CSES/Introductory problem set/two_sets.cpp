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
    ll sum = (n * (n + 1)) / 2;
    if ((sum % 2 != 0) || (n <= 2))
    {
        cout << "NO" << endl;
        return 0;
    }
    else
    {
        cout << "YES\n";
        vl v1, v2;
        if (n % 2 == 0)
        {
            for (ll i = 1; i <= (n / 2); i++)
            {
                if (i % 2 == 0)
                {
                    v2.push_back(i);
                    v2.push_back(n - i + 1);
                }
                else
                {
                    v1.push_back(i);
                    v1.push_back(n - i + 1);
                }
            }
        }
        else
        {
            ll tar_sum = sum / 2;
            ll curr_sum = 0;
            for (ll i = n; i >= 1; i--)
            {
                ll temp = curr_sum + i;
                if (temp <= tar_sum)
                {
                    v1.push_back(i);
                    curr_sum += i;
                }
                else
                {
                    v2.push_back(i);
                }
            }
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        cout << v1.size() << endl;
        print_vector(v1);
        cout << v2.size() << endl;
        print_vector(v2);
        return 0;
    }
}