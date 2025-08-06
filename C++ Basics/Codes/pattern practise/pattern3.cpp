#include <iostream>
using namespace std;

int main()
{
    int i = 1, n;
    cout<< "Enter how many rows you want to print?";
    cin >> n;

    while(i<=n)
    {
        int j = 1;
        while(j<=n)
        {
            cout<< j;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;

}
//prints 
//1 2 3
//1 2 3
//1 2 3