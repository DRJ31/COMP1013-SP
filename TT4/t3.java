import java.util.Scanner;
public class t3{
    private static int number = 0, letter = 0, other = 0;
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        String str = scan.nextLine();
        for (int i = 0; i < str.length(); i++)
            checkCharacter(str.charAt(i));
        System.out.printf("letter: %d numbers: %d other: %d\n", letter, number, other);
    }
    private static void checkCharacter(char a){
        if (('A' <= a && 'Z' >= a) || ('a' <= a && a <= 'z'))
            letter++;
        else if ('0' <= a && '9' >= a)
            number++;
        else
            other++;
    }
}