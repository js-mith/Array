#include <iostream>
using namespace std;
void printarray(int input[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << input[i] << " ";
    }
    cout << endl;
}

void increment(int a, int b[], int n)
{
    a++;
    b[4]++;
}

void reverse(int input[], int n)
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        int temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    int a = 10;
    int b[10] = {1, 2, 3, 4, 5};
    increment(a, b, 5);
    //reverse(b, 5);

    //printarray(b, 5);
    cout<<"The value of a :"<< a << endl;
    cout<<"The value of b[1] :"<< b[4] << endl;

    return 0;
}