#include <iostream>
using namespace std;

int main()
{
    int i = 1, num = 1, n;
    cout<< "Enter how many rows of numbers you want to print?";
    cin >> n;

    while(i<=n)
    {
        int j = 1;
        while(j<=i)
        {
            cout<< num << " ";
            num++;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;

}
/*prints 
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
16 17 18 19 20 21 
*/
