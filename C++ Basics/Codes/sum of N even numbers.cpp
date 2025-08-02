#include <iostream>
using namespace std;

int main()
{
    int sum = 0, n, i = 2;
    cout<< "Enter number you want even sum till.\n";
    cin>> n;


    while(i<=n)
    {
        sum+= i;
        i+= 2;
    }

    cout<< "The sum of all N even numbers is: "<< sum<<endl;
    return 0;

}
