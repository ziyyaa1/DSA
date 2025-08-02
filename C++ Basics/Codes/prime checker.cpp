#include <iostream>
using namespace std;

int main()
{
    int n, i=2;
    bool check = true;
    cout<< "Enter number to check wether it is prime or not.\n";
    cin>> n; //will not directly convert to ascii if given char etc, resulting in bogus output


    while(i<n && check)
    {
        if(n%i == 0)
        {
            check = false;
        }
        i+= 1;
    }

    if((!check) || (n == 0) || (n ==1))
    {
        cout<<"No, the number is NOT a prime number.";
    }
    else
    {
        cout<< "Yes, the number is prime.";
    }

    return 0;

}
