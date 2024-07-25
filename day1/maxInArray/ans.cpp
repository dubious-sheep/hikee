#include <iostream>
using namespace std;

int main()
{
	int t, n, h, maxh[10];
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		maxh[i] = 0;
		for (int j = 0; j < n; j++)
		{
			cin >> h;
			if (h > maxh[i])
				maxh[i] = h;
		}
	}

	for (int a = 0; a < t; a++)
		cout << maxh[a] << endl;

	return 0;
}
