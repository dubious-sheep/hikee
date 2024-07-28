#include <iostream>
#include <vector>
#include <algorithm> // for sort
using namespace std;

int main()
{
    int l;
    cin >> l;

    vector<int> arr(l);

    for (auto &n : arr)
        cin >> n;

    sort(arr.begin(), arr.end());
    for (auto &n : arr)
        cout << n << '\n';

    return 0;
}