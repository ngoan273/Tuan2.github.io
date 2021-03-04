#include <iostream>

using namespace std;

int main()
{
int x;
	int i = 1;
	cout << "nhap x khong qua 100: ";
	cin >> x;
	while ( i <= x && x <= 100 )
	{
		if ( i > 0 && i % 2 == 0)
		{
			cout << i << " ";
		}
	i++;
	}
}
