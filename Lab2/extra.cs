using System;
class extra
{
    static void Main(string[] args)
    {
        char letter;
        Console.WriteLine("Please input an English letter: ");
        letter = Convert.ToChar(Console.ReadLine());
        Console.WriteLine("\"{0}\" and its neighbours in ASCII: ", letter);
        Console.WriteLine("{0}\t{1}\t{2}", letter - 1, Convert.ToInt32(letter), letter + 1);
        Console.WriteLine("{0}\t{1}\t{2}", Convert.ToChar(letter - 1),letter, Convert.ToChar(letter + 1));
    }
}