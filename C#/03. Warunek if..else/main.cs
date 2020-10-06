using System;

namespace Aplikacja
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Podaj swoj wiek: ");
            int wiek = Convert.ToInt32(Console.ReadLine());
            if (wiek >= 18)
            {
                Console.WriteLine("Jestes pelnoletni");
            } else
            {
                Console.WriteLine("Nie jestes pelnoletni");
            }

        }
    }
}
