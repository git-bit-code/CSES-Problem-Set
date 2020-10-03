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
    ll t;
    cin >> t;
    while (t--)
    {
        ll row, col;
        cin >> row >> col;
        if (row == 1 && col == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            if (row > col && row % 2 == 0)
            {
                cout << (row) * (row)-col + 1 << endl;
            }
            if (col > row && col % 2 != 0)
            {
                cout << (col) * (col)-row + 1 << endl;
            }
            if (col > row && col % 2 == 0)
            {
                cout << (col - 1) * (col - 1) + row << endl;
            }
            if (row > col && row % 2 != 0)
            {
                cout << (row - 1) * (row - 1) + col << endl;
            }
            if (row == col)
            {
                cout << (row - 1) * (row - 1) + col << endl;
            }
        }
    }
}