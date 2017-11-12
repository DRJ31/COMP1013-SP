import java.util.Scanner;
public class t3 {
    public static void main(String[] args) {
        int number;
        Scanner scan = new Scanner(System.in);
        number = scan.nextInt();
        if (number <= 0){
            System.out.println("Please input a positive integer.");
            System.exit(-1);
        }
        if (Math.sqrt(number) % 1 == 0)
            System.out.printf("%d is a perfect square, the digit of number of it is %d.\n", number, digitNumber(number));
        else
            System.out.printf("%d is not a perfect square, the digit of number of it is %d.\n", number, digitNumber(number));
    }
    private static int digitNumber(int number){
        int length = 1;
        while (number >= 10){
            number /= 10;
            length++;
        }
        return length;
    }
}