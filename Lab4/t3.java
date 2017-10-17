import java.util.Scanner;
public class t3{
    public static void main(String[] args) {
        int a, b;
        Scanner scan = new Scanner(System.in);
        System.out.println("Please input two integers: ");
        a = scan.nextInt();
        b = scan.nextInt();
        scan.close();
        System.out.printf("Between %d and %d, %d has a greater absolute value.\n", a, b, (a > 0 ? a : -a) > (b > 0 ? b : -b) ? (a > 0 ? a : -a) : (b > 0 ? b : -b));
    }
}