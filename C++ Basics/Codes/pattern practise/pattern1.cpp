#include <iostream>
using namespace std;

int main()
{
    int i = 0, n;
    cout<< "Enter how many rows of stars you want to print?";
    cin >> n;

    while(i< n)
    {
        int j = 0; //It is v important to set j back to 0 here
        while(j<n)
        {
            cout<< " * ";
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;

}
//prints 
//* * * 
//* * *
//* * *