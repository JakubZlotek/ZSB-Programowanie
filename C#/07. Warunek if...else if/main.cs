using System;

namespace Aplikacja
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Podaj wynik procentowy twojego egzaminu: ");
            float procent = Convert.ToInt32(Console.ReadLine());
            if (procent < 10)
            {
                Console.WriteLine("niestety otrzymales 1 :(");
            }
            else if (procent < 30)
            {
                Console.WriteLine("twoja ocena to 2 moglo byc gorzej :/");
            }
            else if (procent < 50)
            {
                Console.WriteLine("twoja ocena to 3 poszlo ci tak se :|");
            }
            else if (procent < 70)
            {
                Console.WriteLine("twoja ocena to 4 jest dobrze :)");
            }
            else
            {
                Console.WriteLine("twoja ocena to 5 essa :3");
            }

        }
    }
}
