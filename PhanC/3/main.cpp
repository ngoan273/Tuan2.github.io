#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i; j >= 0; j--)
            cout << " ";
        for (int x = 1; x <= i * 2 - 1; x++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
