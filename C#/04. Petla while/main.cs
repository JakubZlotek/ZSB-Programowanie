using System;

namespace Aplikacja
{
    class Program
    {
        static void Main(string[] args)
        {
            int liczba = 10;
            while ( liczba < 15)
            {
                Console.WriteLine("Podaj liczbe: ");
                liczba = Convert.ToInt32(Console.ReadLine());
            }

        }
    }
}
