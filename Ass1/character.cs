using System;
class character
{
    static void Main(string[] args)
    {
        char a;
        Console.WriteLine("Please input a character: ");
        a = char.Parse(Console.ReadLine());
        Console.WriteLine("{0} is {1}.", a, Judge(Convert.ToInt32(a)));
    }
    static string Judge(int num)
    {
        if ((num >= 97 && num <= 122) || (num >= 65 && num <= 90))
            return "an English letter";
        else if (num >= 48 && num <= 57)
            return "a digit";
        else
            return "neither an English letter nor a digit";
    }
}