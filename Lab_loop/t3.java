import java.util.Scanner;
public class t3{
    public static void main(String[] args){
        int n, counter = 1, result = 1;
        System.out.println("Please input n: ");
        Scanner scan = new Scanner(System.in);
        n = scan.nextInt();
        scan.close();
        if (n < 0){
            System.out.println("Please input a non-negative integer.");
            System.exit(-1);
        }
        while (counter <= n){
            result *= 2;
            counter++;
        }
        System.out.printf("The result of 2^%d is %d\n", n, result);
    }
}