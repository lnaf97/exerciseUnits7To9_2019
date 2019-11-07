//Lautaro Álvaro Fernández

#include <iostream>

using namespace std;

int main()
{
    int num, numPrevious = -1;
    int increment = 0, decrement = 0;
    
    for ( int i = 1; i <= 10; i++ )
    {
        do
        {
            cout << "Enter a number " << i << ": ";
            cin >> num;
        }
        while ( num < 0 );
        
        if ( numPrevious != -1 )
        {
            if ( numPrevious > num )
                decrement++;
            else if ( numPrevious < num )
                increment++;
        }
        
        numPrevious = num;
    }
    cout << "Increment: " << increment << endl;
    cout << "Decrement: " << decrement << endl;
    
    return 0;
}
