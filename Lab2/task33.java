import java.util.Scanner;
public class task33{
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		int a = scan.nextInt(), b = scan.nextInt();
		if (a > b){
			System.out.println(a);
		}
		else if(a < b){
			System.out.println(b);
		}
		else{
			System.out.println("a = b");
		}
	}
}
