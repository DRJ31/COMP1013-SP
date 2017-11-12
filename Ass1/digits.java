import java.util.Scanner;
public class digits{
    public static void main(String[] args){
        int a;
        Scanner scan = new Scanner(System.in);
        System.out.println("Please input an positive integer: ");
        a = scan.nextInt();
        scan.close();
        if (a > 999)
            System.out.println("The input is too big.");
        else if (a > 0)
            System.out.printf("The number of digits of %d is %d.\n", a, digit(a));
		else
			System.out.println("Please input valid number.");
    }
    private static int digit(int num){
        if (num > 99)
            return 3;
        else if (num > 9)
            return 2;
        else
            return 1;
    }
}
