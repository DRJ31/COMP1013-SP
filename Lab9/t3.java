import java.util.Scanner;
public class t3{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        String password, confirm;
        while(true){
            System.out.println("Please input your password: ");
            password = scan.next();
            if (password.length() < 8){
                System.out.println("Password is not long enough.");
                continue;
            }
            System.out.println("Please confirm your password");
            confirm = scan.next();
            if (!password.equals(confirm)){
                System.out.println("Password don't match.");
                continue;
            }
            System.out.printf("Your password \"%s\" is confirmed.\n", confirm.substring(0, 20));
            break;
        }
    }
}