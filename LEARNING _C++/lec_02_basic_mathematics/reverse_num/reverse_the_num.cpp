#include <bits/stdc++.h>
using namespace std;

int main() {
	int num, revNum = 0;
	cin >> num;

	while(num > 0)
	{
		revNum = revNum * 10 + num % 10;
		num = num / 10;
	}

	cout << revNum;
	return 0;
}
