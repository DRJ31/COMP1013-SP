using System;
class task32
{
	static void Main(string[] args)
	{
		int a, b;
        Console.WriteLine("Please input the first integer: ");
        a = int.Parse(Console.ReadLine());
        Console.WriteLine("Please input the second integer: ");
        b = int.Parse(Console.ReadLine());
        Console.WriteLine("{0} + {1} = {2}", a, b, a + b);
        Console.WriteLine("{0} - {1} = {2}", a, b, a - b);
        Console.WriteLine("{0} * {1} = {2}", a, b, a * b);
        if (b == 0)
        {
            Console.WriteLine("b could not be 0");
        }
        else
        {
            Console.WriteLine("{0} / {1} = {2}", a, b, a / b);
            Console.WriteLine("{0} % {1} = {2}", a, b, a % b);
        }
	}
}