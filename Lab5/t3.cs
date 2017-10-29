using System;
class t3
{
    static void Main(string[] args)
    {
        double dollar;
        char currency;
        Console.WriteLine("Please input the amount of US dollars: ");
        dollar = double.Parse(Console.ReadLine());
		if (dollar < 0)
			Console.WriteLine("Please input valid number.");
        Console.WriteLine("Convert to Euro(E) or RMB(R)?");
        currency = char.Parse(Console.ReadLine());
        if (currency == 'E' || currency == 'e')
            Console.WriteLine("{0} US dollars converts to {1} euros.\n", dollar, dollar * 0.5);
        else if (currency == 'R' || currency == 'r')
            Console.WriteLine("{0} US dollars converts to {1} RMB.\n", dollar, dollar * 7);
        else
            Console.WriteLine("Please input the right character.");
    }
}
