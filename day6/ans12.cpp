#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void runTests()
{
    int n;
    cin >> n;
    vector<int> s(n);
    for (auto &i : s)
        cin >> i;
    string v;
    cin >> v;
    vector<int> min_arr;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == '0')
            min_arr.push_back(s[i]);
    }
    sort(min_arr.begin(), min_arr.end());
    cout << min_arr[0] << '\n';
}

int main()
{
    int t;

    cin >> t;
    while (t--)
    {
        runTests();
    }
    return 0;
}