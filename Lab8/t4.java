import java.util.Scanner;
public class t4{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        char[] a = scan.next().toCharArray();
        for (int i = 0; i < a.length; i++){
            if (a[i] < '0' || a[i] > '9')
                break;
            System.out.printf("%c", a[i]);
        }
        System.out.println();
    }
}