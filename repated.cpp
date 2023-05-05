#include<iostream>

using namespace std;
int duplicate(int input[] , int n ){
    for (int i = 0; i < n; i++)
     {
  for( int j = i+1; j < n; j++) {
    if(input[i] == input[j]){
     cout<<"The duplicate value is :" << input[i] << endl;
    }
  }
}
}




int main() {
    int n;
    cin>>n;
    int input[n];
     for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

       
       duplicate(input,n);
     return 0;
}