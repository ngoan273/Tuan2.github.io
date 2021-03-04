#include <iostream>

using namespace std;

int main()
{
int x;
	int i = 1;
	cout << "nhap x khong qua 100: ";
	cin >> x;
	do {
		if ( i > 0 && i % 3 == 0)
		{
			cout << i << " ";
		}
		i++;
	} while ( i <= x && x <= 100);
}
