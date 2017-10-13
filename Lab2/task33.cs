using System;
class task33
{
    static void Main(string[] args)
    {
     	int a, b;
        Console.WriteLine("Please input the first integer: ");
        a = int.Parse(Console.ReadLine());
        Console.WriteLine("Please input the second integer: ");
        b = int.Parse(Console.ReadLine());
        Console.WriteLine("{0}", a > b ? a : b);   
    }
}
