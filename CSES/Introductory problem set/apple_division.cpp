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

void subsequence(vl ip, vl op, vector<vector<long long>> &ans)
{
    if (ip.size() == 0)
    {
        ans.push_back(op);
        return;
    }
    vl op1 = op, op2 = op;
    op2.push_back(ip[0]);
    ip.erase(ip.begin() + 0);
    subsequence(ip, op1, ans);
    subsequence(ip, op2, ans);
    return;
}

int main()
{
    int n;
    cin >> n;
    vl v, op;
    vector<vector<long long>> ans;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    subsequence(v, op, ans);
    ans.erase(ans.begin() + 0);
    ans.erase(ans.end() + 0);
    int sum1 = 0, sum2 = 0, diff = INT32_MAX;
    for (int i = 0; i < ans.size(); i++)
    {
        sum1 = 0;
        for (int j = 0; j < ans[i].size(); j++)
            sum1 += ans[i][j];
        sum2 = abs(sum1 - sum);
        int temp = abs(sum1 - sum2);
        if (temp <= diff)
        {
            diff = temp;
        }
    }
    if (n == 1)
    {
        cout << v[0];
        return 0;
    }
    cout << diff;
    return 0;
}