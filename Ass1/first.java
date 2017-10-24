import java.util.Scanner;
public class first{
    public static void main(String[] args) {
        int i = 0, j = 5;
        char ch;
        Scanner scan = new Scanner(System.in);
        ch = scan.next().toCharArray()[0];
        System.out.printf("the ASCII code of '%c' is %d\n", ch, (int)ch);
        System.out.printf("the value of i is %d\n", i);
        i = ch;
        System.out.printf("the value of i is %d\n", i);
    }
}