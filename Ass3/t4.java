import java.util.Scanner;
public class t4{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        System.out.println("Please input 3 integers: ");
        int a = scan.nextInt();
        int b = scan.nextInt();
        int c = scan.nextInt();
        System.out.printf("The factorial sum of %d, %d and %d is %d\n", a, b, c, fac(a)+fac(b)+fac(c));
    }
    private static int fac(int num){
        int result = 1;
        for (int i = num; i > 0; i--)
            result *= i;
        return result;
    }
}