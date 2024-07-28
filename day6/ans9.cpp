#include <iostream>
#include <vector>
#include <algorithm> // for min_element
using namespace std;

void runTests()
{
    int x, y, z;
    cin >> x >> y >> z;

    //* using arrays
    // int arr[] = {x, y, z};
    // int sizeof_arr = sizeof(arr) / sizeof(arr[0]);
    // auto min_arr = min_element(arr, arr + sizeof_arr);
    // int index_min = distance(arr, min_arr);

    //* using vectors
    vector<int> arr = {x, y, z};
    auto min_arr = min_element(arr.begin(), arr.end());
    int index_min = distance(arr.begin(), min_arr);

    switch (index_min)
    {
    case 0:
        cout << "ALICE" << '\n';
        break;
    case 1:
        cout << "BOB" << '\n';
        break;
    case 2:
        cout << "CHARLIE" << '\n';
        break;
    default:
        break;
    }
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