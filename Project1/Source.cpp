#include <iostream>
#include <string.h>
using namespace std;
int k = -7;
int main()
{
	char x[1000];
	cin >> x;
	for (int i = 0; x[i] != 0; i++)
	{
		cout << (char)(x[i] + k);
	}

}
