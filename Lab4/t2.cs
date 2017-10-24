using System;
class t2
{
    static void Main(string[] args)
    {
        int a, b, c;
        Console.WriteLine("Please input the first integer: ");
        a = int.Parse(Console.ReadLine());
        Console.WriteLine("Please input the second integer: ");
        b = int.Parse(Console.ReadLine());
        Console.WriteLine("Please input the third integer: ");
        c = int.Parse(Console.ReadLine());
        Console.WriteLine("Among {0}, {1} and {2}, {3} is the greatest.\n", a, b, c, (a > b ? a : b) > c ? (a > b ? a : b) : c);
    }
}