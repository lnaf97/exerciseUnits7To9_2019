//Lautaro Álvaro Fernández

using System;

class TextWithoutA
{
    static void Main()
    {
        bool proceed = false;
        do
        {
            proceed = false;
            string text;
            Console.Write("Type a text: ");
            text = Console.ReadLine();
            
            foreach ( char letter in text )
            {
                if ( letter == 'a' || letter == 'A' )
                {
                    proceed = true;
                }
            }
        }
        while ( proceed );
    }
}
