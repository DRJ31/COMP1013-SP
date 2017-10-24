using System;
class evenodd
{
    static void Main(string[] args)
    {
        int a;
        Console.WriteLine("Please input an integer: ");
        a = int.Parse(Console.ReadLine());
        Console.WriteLine("{0} is an {1} number.", a, a % 2 == 0 ? "even" : "odd");
    }
}