import java.util.Scanner;
public class t1
{
    public static void main(String[] args) {
        int n;
        Scanner scan = new Scanner(System.in);
        n = scan.nextInt();
        scan.close();
        if (n < 0)
            n = -n;
        System.out.println("The result is " + (n + n));
    }
}