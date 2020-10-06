using System;

namespace Aplikacja
{
    class Program
    {
        static void Main(string[] args)
        {
            int licznik = 48, liczba = 1;
            do
            {
                liczba += 2;
                Console.WriteLine(liczba);
            } while (liczba <= licznik);

        }
    }
}
