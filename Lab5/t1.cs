using System;
class t1
{
    static void Main(string[] args)
    {
        int n;
        Console.WriteLine("Please input n: ");
        n = int.Parse(Console.ReadLine());
        if (n < 0)
            n = -n;
        Console.WriteLine("The result is {0}.", n + n);
    }
}