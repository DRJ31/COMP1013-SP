import java.util.Scanner;
public class t2{
    public static void main(String[] args) {
        int a, b, c;
        Scanner scan = new Scanner(System.in);
        System.out.println("Please input three integers: ");
        a = scan.nextInt();
        b = scan.nextInt();
        c = scan.nextInt();
        scan.close();
        System.out.printf("Among %d, %d and %d, %d is the greatest.\n", a, b, c, (a > b ? a : b) > c ? (a > b ? a : b) : c);
    }
}