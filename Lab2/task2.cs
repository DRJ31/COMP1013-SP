using System;
class task2
{
    static void Main(string[] args)
    {
        Console.WriteLine("Number of bytes used to store a char type variable is {0}", sizeof(char));
        Console.WriteLine("Number of bytes used to store a short type variable is {0}", sizeof(short));
        Console.WriteLine("Number of bytes used to store a int type variable is {0}", sizeof(int));
        Console.WriteLine("Number of bytes used to store a long type variable is {0}", sizeof(long));
        Console.WriteLine("Number of bytes used to store a float type variable is {0}", sizeof(float));
        Console.WriteLine("Number of bytes used to store a double type variable is {0}", sizeof(double));
        Console.WriteLine("Number of bytes used to store a bool type variable is {0}", sizeof(bool));
    }
}