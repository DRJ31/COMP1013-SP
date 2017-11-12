import java.util.Scanner;
public class t8{
    public static void main(String[] args){
        int n, counter, result = 1;
        System.out.println("Please input n: ");
        Scanner scan = new Scanner(System.in);
        n = scan.nextInt();
        scan.close();
        if (n < 0){
            System.out.println("Please input a non-negative integer.");
            System.exit(-1);
        }
        for (counter = 0; counter < n; counter++){
            result *= 2;
        }
        System.out.printf("The result of 2^%d is %d\n", n, result);
    }
}