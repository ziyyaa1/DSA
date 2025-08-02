#include <iostream>
using namespace std;

int main()
{
    int i = 0, j = 0, n;
    cin >> n;
    cout<< "Enter how many rows of stars you want to print?";
    while(i< n)
    {
        while(j<n)
        {
            cout<< " i ";
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;

}
