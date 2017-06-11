#include <stdio.h>
#include <iostream>
#include <math.h>
#define min(a,b) a < b ? a : b
using namespace std;
int a[1001];
int b[1001];
int main()
{
	int length1, length2 = 0, n, m, ans = 1e9, sum;
    cin >> n;
	for(int i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
	}
	cin >> m;
	for(int j = 1; j <= m; j++)
	{
		scanf("%d", &b[j]);
	}
	printf("=====================\n");
	for(int i = 1; i <= m - n + 1; i++)
	{
		sum = 0;
		for(int j = i; j <= i + n - 1; j++)
		{
			sum += (a[j - i + 1] - b[j]) * (a[j - i + 1] - b[j]);
		}
		ans = min(ans, sum);
	}
	cout<<ans<<endl;
    return 0;
}
