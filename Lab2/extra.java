import java.util.Scanner;
public class extra{
	public static void main(String[] args){
		char letter;
		Scanner scan = new Scanner(System.in);
		System.out.println("Please input an English letter: ");
		letter = scan.next().charAt(0);
		System.out.println(letter + " and its neighbours in ASCII: ");
		System.out.printf("%d\t%d\t%d\n", letter-1, (int)letter, letter+1);
		System.out.printf("%c\t%c\t%c\n", letter-1, letter, letter+1);
	}
}
