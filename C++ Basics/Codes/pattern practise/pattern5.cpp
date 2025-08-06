#include <iostream>
using namespace std;

int main()
{
    int i = 1, n;
    cout<< "Enter how many rows of numbers you want to print?";
    cin >> n;

    while(i<=n)
    {
        int j = 1;
        while(j<=i)
        {
            cout<< j;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;

}
/*prints 
1
12
123
1234
12345
123456
*/
