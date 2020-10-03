#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

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
    string s;
    getline(cin, s);
    s += '*';
    long long i = 1, j = 0;
    vector<int> cnt;
    for (long long i = 1; i < s.size();)
    {
        //cout << i << " " << j << "\n";
        if (s[i] != s[j])
        {
            if (i - j == 1)
            {
                i++;
                j++;
            }
            else
            {
                //cout << "Pushed in cnt: " << i << " " << j << "\n";
                cnt.push_back(i - j);
                j = i;
                i++;
            }
        }
        else
        {
            i++;
        }
    }
    //print_vector(cnt);

    if (cnt.empty())
    {
        cout << 1;
    }
    else
    {
        sort(cnt.begin(), cnt.end());
        int num = cnt.size() - 1;
        cout << cnt[num];
    }
}