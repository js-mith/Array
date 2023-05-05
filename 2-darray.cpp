#include <iostream>
using namespace std;
void printarray(int a[][5], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int a[5][5] = {{1, 2}, {3, 4}};
    printarray(a, 5, 5);

    /*
    int a[100][100];
    int m, n;
    cin >> m >> n;
    //taking input
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    printarray(a,m,n);

    //printarray row wise
    cout<< " row wise" <<endl;

    for(int i = 0 ; i<m ; i++){
        for(int j = 0 ; j<n ; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    //print coloumn wise
    cout<<"column wise" << endl;
    for(int j = 0 ; j< n ; j++){
        for(int i = 0 ; i< m ; i++){
            cout<< a[i][j]<<" ";

        }
        cout<<endl;
    }
    */
    return 0;
}