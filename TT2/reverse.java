import java.util.Scanner;
public class reverse{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        String str = scan.next();
        StringBuilder sb = new StringBuilder(str);
        System.out.println(sb.reverse());
    }
}