
#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;
	int n, a[200];

int main()
{
	cout << "nermuceq n="; cin >> n;
	for(int i=2;i<n;++i)
	{
		for (int j = i * i;j<=n;j+=i)
		{
			if (j > n)break;
			a[j] = 1;
		}
	}
	for (int i = 2; i <= n; ++i)
		if (a[i] == 0)
			cout << i << "  ";
	return 0;
}
