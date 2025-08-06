#include <iostream>
using namespace std;

int main()
{
    int i = 1, n;
    cout<< "Enter how many rows you want to print?";
    cin >> n;

    while(i<=n)
    {
        int j = n; // or start w j = 1, j<=n, j++ and print cout<< n - j +1
        while(j>=1)
        {
            cout<< j;
            j--;
        }
        cout<<endl;
        i++;
    }

    return 0;

}
//prints 
//3 2 1
//3 2 1
//3 2 1