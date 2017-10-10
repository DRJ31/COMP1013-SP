import java.util.Scanner;
public class task32{
	public static void main(String[] args){
		int a, b;
		System.out.println("Please input 2 intergers: ");
		Scanner scan = new Scanner(System.in);
		a = scan.nextInt();
		b = scan.nextInt();
		System.out.printf("%d + %d = %d\n", a, b, a+b);
		System.out.printf("%d - %d = %d\n", a, b, a-b);
		System.out.printf("%d * %d = %d\n", a, b, a*b);
		try{
			System.out.printf("%d / %d = %d\n", a, b, a/b);
		}catch(Exception e){
			System.err.println("The second interger could not be 0.");
		}
	}
}
