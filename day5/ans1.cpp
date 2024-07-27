#include <iostream>
#include <vector>
using namespace std;

void runTests()
{
    int n;
    bool flag = true;

    cin >> n;

    vector<int> s(n);
    for (auto &x : s)
        cin >> x;

    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] > s[i + 1])
        {
            flag = false;
            break;
        }
    }
    cout << (flag ? "yes" : "no") << '\n';
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