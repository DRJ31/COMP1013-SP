import java.util.Scanner;
public class t2{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int num;
        do {
            System.out.print("Please input a positive integer (input 0 to exit): ");
            num = scan.nextInt();
            if (num < 0){
                System.out.println("Invalid Input!");
                continue;
            }
            else if (num == 0){
                System.out.println("Bye-bye");
                break;
            }
            if (judgePrime(num))
                System.out.printf("%d is a prime.\n", num);
            else
                System.out.printf("%d is not a prime.\n", num);
        }while (true);
        scan.close();
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