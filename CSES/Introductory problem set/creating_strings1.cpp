#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <functional>
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
    for (auto item : vec)
    {
        cout << item << "\n";
    }
}
set<string> perms;

void permutations(string prefix, string suffix)
{
    if (suffix.length() == 0)
    {
        perms.insert(prefix);
        return;
    }
    for (int i = 0; i < suffix.length(); i++)
    {
        permutations(prefix + suffix[i], suffix.substr(0, i) + suffix.substr(i + 1));
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    permutations("", s);
    cout << perms.size() << endl;
    for (auto ele : perms)
    {
        cout << ele << endl;
    }
    return 0;
}