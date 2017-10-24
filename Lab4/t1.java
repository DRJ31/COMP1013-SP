import java.util.Scanner;
public class t1{
	public static void main(String[] args){
		System.out.println("Please input 2 integers: ");
		Scanner scan = new Scanner(System.in);
		int a = scan.nextInt(), b = scan.nextInt();
		scan.close();
		System.out.printf("Between %d and %d, %d is greater.\n", a, b, a > b ? a : b);
	}
}
