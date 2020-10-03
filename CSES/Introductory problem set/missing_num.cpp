#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    long long int n, num;
    cin >> n;
    vector<long long> arr;
    for (long long i = 0; i < n - 1; i++)
    {
        cin >> num;
        arr.push_back(num);
    }
    sort(arr.begin(), arr.end());
    for (long long i = 0; i < arr.size(); i++)
    {
        if (arr[i] != i + 1)
        {
            cout << i + 1;
            break;
        }
        if (i == n - 2)
        {
            if (arr[i] == i + 1)
            {
                cout << n;
            }
        }
    }
}