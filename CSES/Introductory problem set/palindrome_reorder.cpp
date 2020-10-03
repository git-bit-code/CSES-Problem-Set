#include <iostream>
#include <algorithm>
#include <map>
#include <functional>
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
    string s, ans = "";
    getline(cin, s);
    int n = s.length();
    map<char, int> freq;
    for (int i = 0; i < s.length(); i++)
    {
        if (freq.find(s[i]) == freq.end())
        {
            freq.insert(make_pair(s[i], 1));
        }
        else
        {
            freq[s[i]]++;
        }
    }
    int cnt_odd = 0, cnt_even = 0;
    for (auto &item : freq)
    {
        if (item.second % 2 == 0)
        {
            cnt_even++;
        }
        else
        {
            cnt_odd++;
        }
    }
    if (n % 2 == 0)
    {
        if (cnt_odd > 0)
        {
            cout << "NO SOLUTION";
            return 0;
        }
        else
        {
            for (auto &item : freq)
            {
                for (int i = 0; i < item.second / 2; i++)
                {
                    ans += item.first;
                }
            }
            string temp = string(ans.rbegin(), ans.rend());
            ans += temp;
        }
        cout << ans;
    }
    else
    {
        if (cnt_odd > 1)
        {
            cout << "NO SOLUTION";
            return 0;
        }
        else
        {
            string temp1 = "";
            for (auto &item : freq)
            {
                if (item.second % 2 != 0)
                {
                    for (int i = 0; i < item.second; i++)
                    {
                        temp1 += item.first;
                    }
                }
                else
                {
                    for (int i = 0; i < item.second / 2; i++)
                    {
                        ans += item.first;
                    }
                }
            }
            string temp = string(ans.rbegin(), ans.rend());
            ans += temp1;
            ans += temp;
        }
        cout << ans;
    }
    return 0;
}