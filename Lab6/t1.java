import java.util.Scanner;
public class t1{
    public static void main(String[] args){
        int num;
        System.out.print("Please input a positive integer: ");
        Scanner scan = new Scanner(System.in);
        num = scan.nextInt();
        if (num <= 0){
            System.out.println("Invalid Input!");
            System.exit(-1);
        }
        if (judgePrime(num))
            System.out.printf("%d is a prime.\n", num);
        else
            System.out.printf("%d is not a prime.\n", num);
    }
    private static boolean judgePrime(int number){
        if (number == 1)
            return false;
        for (int i = 2; i <= Math.sqrt(number); i++){
            if (number % i == 0)
                return false;
        }
        return true;
    }
}