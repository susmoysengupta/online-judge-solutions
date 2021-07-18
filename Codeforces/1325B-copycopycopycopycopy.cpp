/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1325B
	problem name: CopyCopyCopyCopyCopy
	problem link: https://codeforces.com/problemset/problem/1325/B

	Status: __Solved__
	Solved at: Jul/18/2021 10:56
*/

#include <iostream>
#include <algorithm>

#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007ll
#define PI 3.14159
#define MAX 100005

#define lli long long int

#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)

using namespace std;

void solve()
{
    int n, count = 1;

    lli arr[MAX], temp;

    scanf("%d", &n);

    rep(i, 0, n) cin >> arr[i];

    sort(arr, arr + n);

    temp = arr[0];

    rep(i, 1, n)
    {
        if(arr[i] == temp) continue;

        temp = arr[i];
        count++;
    }

    printf("%d\n", count);
}

int main()
{
    int t;

    scanf("%d", &t);
    
    while (t--) solve();

    return 0;
}
