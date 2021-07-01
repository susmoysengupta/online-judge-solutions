/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1426A
	problem name: Floor Number
	problem link: https://codeforces.com/problemset/problem/1426/A

	Status: __UNSOLVED__
	Solved at: __
*/

#include <iostream>
#include <cmath>

#define INF  (int)1e9
#define EPS   1e-9
#define MOD 1000000007ll
#define PI 3.14159

#define lli long long int

#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)

using namespace std;

int main()
{
	int t, n, x, r;
	
	cin >> t;
	
	while(t--)
	{
		cin >> n >> x;

		if(n <= 2)
			cout << "1" << endl;
		else
			r = n % x;
			r <= 2 ? cout << n / x << endl : cout << n / x + r << endl;
	}

    return 0;
}

