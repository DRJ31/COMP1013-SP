import java.util.Scanner;
public class f2c{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        System.out.println("Please input Fahrenheit temperature: ");
        double f = scan.nextDouble();
        System.out.printf("The Celsius temperature is: %f.\n", 5 * (f - 32) / 9);
    }
}