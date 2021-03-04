#include<iostream>
using namespace std;
int main()
{
    int n, a[1000][1000];
    cout << "Nhap n: ";
    cin >> n;
    for(int i=0 ; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}
