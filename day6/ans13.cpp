#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void runTests()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;

    auto max_a = max_element(a.begin(), a.end());
    int ans = distance(a.begin(), max_a);

    if (count(a.begin(), a.end(), *max_a) > 1)
    {
        for (int i = 0; i < n; i++)
            if (a[i] == a[ans] && b[i] > b[ans])
                ans = i;
    }

    cout << ans + 1 << '\n';

    // * alternate using vectors
    // vector<int> ans(n), b_value(n);
    // auto max_a = max_element(a.begin(), a.end());

    // int index = 0;
    // for (auto &i : a)
    // {
    //     if (i == *max_a)
    //     {
    //         ans.push_back(index);
    //         b_value.push_back(b[index]);
    //     }
    //     index++;
    // }
    // auto max_b = max_element(b_value.begin(), b_value.end());
    // cout << ans[distance(b_value.begin(), max_b)] + 1 << '\n';

    // * editorialist's approach
    // int ans = 0;
    // for (int i = 1; i < n; i++)
    // {
    //     if (a[i] > a[ans])
    //         ans = i;
    //     else if (a[i] == a[ans] && b[i] > b[ans])
    //         ans = i;
    // }
    // cout << ans + 1 << '\n';

    // ! first approach is the fastest, 0.06s; other 2 are 0.07s
    // ? complexity for all are O(n) ?
    // * python computes the slowest; c++ ftw
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