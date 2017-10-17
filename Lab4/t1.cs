using System;
class t1
{
    static void Main(string[] args)
    {
     	int a, b;
        Console.WriteLine("Please input the first integer: ");
        a = int.Parse(Console.ReadLine());
        Console.WriteLine("Please input the second integer: ");
        b = int.Parse(Console.ReadLine());
        Console.WriteLine("Between {0} and {1}, {2} is greater.", a, b, a > b ? a : b);   
    }
}
