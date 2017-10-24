using System;
class first
{
    static void Main(string[] args)
    {
        int i = 0, j = 5;
        char ch;
        ch = char.Parse(Console.ReadLine());
        Console.WriteLine("the ASCII code of '{0}' is {1}", ch, Convert.ToInt32(ch));
        Console.WriteLine("the value of i is {0}", i);
        i = ch;
        Console.WriteLine("the value of i is {0}", i);
    }
}