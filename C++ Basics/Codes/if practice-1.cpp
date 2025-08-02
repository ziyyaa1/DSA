#include <iostream>
using namespace std;

int main()
{
    char letter;
    cout<< "Enter a character\n";
    cin>> letter;

    if((letter >= 'A') && (letter <= 'Z' ) )
    {
        cout<<"You entered an uppercase letter\n";
    }
    else if ((letter >= 'a') && (letter <= 'z' )) 
    {
        cout<<"You entered a lowercase letter\n";
    }
    else
    {
        cout<< "WHATEVER YOU ENTERED WAS NOT A LETTER!!!\n";
    }
    return 0;

}
//IMPORTANT:
//1. If first if passses, elses will not be checked. However, if there are more than one ifys then they will be checked.