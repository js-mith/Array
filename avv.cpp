#include <iostream>
using namespace std;

int averageMarks(char firstLetterOfName, int m1, int m2, int m3)
{
    // Write your code here.
    int sum = m1 + m2 + m3;
    int average = (sum / 3.0);
    cout << firstLetterOfName << " " << average;
}
int main()
{
    int m1;
    int m2;
    int m3;
    char firstLetterOfNAME;
    cin>>m1;
    cin>>m2;
    cin>>m3;
    cin>>firstLetterOfNAME;
    averageMarks(firstLetterOfNAME, m1, m2, m3);
}