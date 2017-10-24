using System;
class opt
{
    static void Main(string[] args)
    {
        int a;
        Console.WriteLine("Please input an integer between 0 to 15: ");
        a = int.Parse(Console.ReadLine());
        Console.WriteLine("{0} is {1}{2}{3}{4} in binary.\n", a, bitnum(a, 1), bitnum(a, 2), bitnum(a, 3), bitnum(a, 4));
    }
    static int bitnum(int num, int pos)
    {
        return (num >> (4 - pos)) % 2;
    }
}