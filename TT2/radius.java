import java.util.Scanner;
public class radius{
    public static final double PI = 3.1415926535;
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        double radius = scan.nextDouble();
        System.out.println(radius * PI);
    }
}