/* 
	problem no: 2761
	problem name: Input and Output of Various Types
	problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/2761
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: 6/24/21, 11:18:24 PM
*/

#include <iostream>

using namespace std;

int main()
{
	int a;
	float b;
	char c;
	char d[50];
	
	scanf("%d %f %c %[^\n]", &a, &b, &c, &d);
	
	printf("%d%f%c%s\n", a, b, c, d);
	
	printf("%d\t%f\t%c\t%s\n", a, b, c, d);
	
	printf("%10d%10f%10c%10s\n", a, b, c, d);
	
	return 0;
}
