import java.util.Scanner;
public class opt{
    public static void main(String[] args) {
        int a;
        Scanner scan = new Scanner(System.in);
        System.out.println("Please input an integer between 0 to 15: ");
        a = scan.nextInt();
        scan.close();
        System.out.printf("%d is %d%d%d%d in binary.\n", a, bitnum(a, 1), bitnum(a, 2), bitnum(a, 3), bitnum(a, 4));
    }
    public static int bitnum(int num, int pos){
        return (num >> (4 - pos)) % 2;
    }
}