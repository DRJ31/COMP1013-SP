using System;
class t4
{
    static void Main(string[] args)
    {
        char gpa;
        Console.WriteLine("Please input the GPA grade: ");
        gpa = char.Parse(Console.ReadLine());
        switch (gpa)
        {
            case 'A':
            case 'a':
                Console.WriteLine("4.00");
                break;
            case 'B':
            case 'b':
                Console.WriteLine("3.00");
                break;
            case 'C':
            case 'c':
                Console.WriteLine("2.00");
                break;
            case 'D':
            case 'd':
                Console.WriteLine("1.00");
                break;
            case 'F':
            case 'f':
                Console.WriteLine("0.00");
                break;
            default:
                Console.WriteLine("Please input the correct GPA grade.");
                break;
        }
    }
}