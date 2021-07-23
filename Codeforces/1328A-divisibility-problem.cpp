/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1328A
	problem name: Divisibility Problem
	problem link: https://codeforces.com/problemset/problem/1328/A

	Status: __Solved__
	Solved at: Jul/24/2021 01:13
*/

#include <iostream>

#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007ll
#define PI 3.14159

#define lli long long int

#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)

using namespace std;

void solve()
{
    int a, b;

    scanf("%d%d", &a, &b);

    if(a%b == 0)
        printf("0\n");
    else
        printf("%d\n", ( b*(a/b + 1) - a));
}

int main()
{
    int t;

    scanf("%d", &t);

    while (t--) solve();

    return 0;
}
