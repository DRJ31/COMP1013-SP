import java.util.Scanner;
public class t14{
    public static void main(String[] args) {
        int mycard = 3, guess;
        Scanner scan = new Scanner(System.in);
        do{
            System.out.println("Guess my card: ");
            guess = scan.nextInt();
            if (guess == mycard)
                System.out.println("Good guess!");
            else
                System.out.println("Try again.");
        }while(guess != mycard);
        scan.close();
    }
}