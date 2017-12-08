import java.util.Scanner;
public class t2{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        char a, b;
        System.out.println("Please input the first character: ");
        a = scan.next().toCharArray()[0];
        System.out.println("Please input the second character: ");
        b = scan.next().toCharArray()[0];
        if (compareASCII(a, b) == 0)
            System.out.printf("The ASCII code of %c is equal to the ASCII code of %c.\n", a, b);
        else if (compareASCII(a, b) == 1)
            System.out.printf("The ASCII code of %c is larger than the ASCII code of %c.\n", a, b);
        else
            System.out.printf("The ASCII code of %c is smaller than the ASCII code of %c.\n", a, b);
    }
    private static int compareASCII(char a, char b){
        if (a == b)
            return 0;
        else if (a > b)
            return 1;
        return -1;
    }
}