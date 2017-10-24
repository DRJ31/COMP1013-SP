using System;
class digits
{
    static void Main(string[] args)
    {
        int a;
        Console.WriteLine("Please input an positive integer: ");
        a = int.Parse(Console.ReadLine());
        if (a > 999)
            Console.WriteLine("The input is too big.");
        else
            Console.WriteLine("The number of digits of {0} is {1}.", a, Digit(a));
    }
    static int Digit(int num)
    {
        if (num > 99)
            return 3;
        else if (num > 9)
            return 2;
        else
            return 1;
    }
}