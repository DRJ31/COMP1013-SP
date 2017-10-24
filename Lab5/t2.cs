using System;
class t2
{
    static void Main(string[] args)
    {
        int height, weight;
        Console.WriteLine("Please input height(cm): ");
        height = int.Parse(Console.ReadLine());
        Console.WriteLine("Please input weight(kilo): ");
        weight = int.Parse(Console.ReadLine());
        if ((height - 105) > (weight + 20))
            Console.WriteLine("You are too slim.");
        else
        {
            if (((weight - 10) < (height - 105)) && ((height - 105) <= (weight + 20)))
                Console.WriteLine("You are fit.");
            else
                Console.WriteLine("You are too fat.");
        }
    }
}