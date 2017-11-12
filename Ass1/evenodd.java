import java.util.Scanner;
public class evenodd{
    public static void main(String[] args){
        int a;
        Scanner scan = new Scanner(System.in);
        System.out.println("Please input an integer: ");
        a = scan.nextInt();
        scan.close();
        System.out.printf("%d is an %s number.\n", a, a % 2 == 0 ? "even" : "odd");
    }
}