import java.util.Scanner;
import java.text.DecimalFormat;
public class t2{
    public static void main(String[] args) {
        double n;
        DecimalFormat form = new DecimalFormat();
        Scanner scan = new Scanner(System.in);
        System.out.println("Please input n: ");
        n = scan.nextDouble();
        if (n < 0){
            System.out.println("Please input natural number.");
            System.exit(-1);
        }
        scan.close();
        System.out.printf("The result of 2^%s + 3^%s is %s.\n", form.format(n), form.format(n), form.format(Math.pow(2, n) + Math.pow(3, n)));
    }
}