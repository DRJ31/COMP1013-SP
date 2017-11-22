import java.util.Scanner;
import java.util.DecimalFormat;
public class t3{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        double number, sum = 0, i = 0;
        do {
            number = scan.nextInt();
            sum += number;
            i++;
        }while (number != -1);
        i--;
        System.out.printf("The average is %s.\n", new DecimalFormat().format(sum/i));
    }
}