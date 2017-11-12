import java.util.Scanner;
import java.text.DecimalFormat;
public class t6{
    public static void main(String[] args) {
        int n, counter = 0;
        double result = 0.5;
        System.out.println("Please input n: ");
        Scanner scan = new Scanner(System.in);
        n = scan.nextInt();
        if (n < 0){
            System.out.println("Please input a non-negative integer.");
            System.exit(-1);
        }
        do{
            result *= 2;
            counter++;
        }while (counter <= n);
        System.out.println("The result of 2^" + n + " is " + new DecimalFormat("0").format(result));
    }
}