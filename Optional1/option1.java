import java.util.Scanner;
public class option1{
    public static void main(String[] args){
        char c, d;
        Scanner scan = new Scanner(System.in);
        System.out.println("Please input 2 letters.");
        c = scan.next().toCharArray()[0];
        d = scan.next().toCharArray()[0];
        if (check(c) || check(d)){
            System.out.println("Please input 2 letters.");
            System.exit(-1);
        }
        System.out.printf("%c to %c is %d\n", c, d, abs(toLower(c) - toLower(d)));
    }
    private static int abs(int a){
        if (a < 0)
            return -a;
        return a;
    }
    private static char toLower(char a){
        if (a >= 'A' && a <= 'Z')
            a += 32;
        return a;
    }
    private static boolean check(char a){
        if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
            return false;
        return true;
    }
}