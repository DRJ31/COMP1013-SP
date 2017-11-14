import java.util.Scanner;
public class t3{
    public static void main(String[] args){
        String firstString, secondString;
        Scanner scan = new Scanner(System.in);
        System.out.println("Please input the first string: ");
        firstString = scan.next();
        System.out.println("Please input the second string: ");
        secondString = scan.next();
        if (firstString.equals(secondString))
            System.out.println("The two strings are the same.");
        else
            System.out.println("The two strings are not the same.");
    }
}