import java.util.Scanner;
public class t2{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        String str = scan.nextLine();
        System.out.println(new StringBuilder(str).reverse().toString());
    }
}