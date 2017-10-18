using System;
class t3
{
    static void Main(string[] args)
    {
        int a, b;
        Console.WriteLine("Please input the first integers: ");
        a = int.Parse(Console.ReadLine());
        Console.WriteLine("Please input the second integers: ");
        b = int.Parse(Console.ReadLine());
        Console.WriteLine("Between {0} and {1}, {2} has a greater absolute value.\n", a, b, (a > 0 ? a : -a) > (b > 0 ? b : -b) ? (a > 0 ? a : -a) : (b > 0 ? b : -b));
    }
}