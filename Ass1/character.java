import java.util.Scanner;
public class character{
    public static void main(String[] args) {
        char a;
        System.out.println("Please input a character: ");
        Scanner scan = new Scanner(System.in);
        a = scan.next().toCharArray()[0];
        scan.close();
        System.out.printf("%c is %s.\n", a, judge((int)a));
    }
    private static String judge(int num){
        if ((num >= 97 && num <= 122) || (num >= 65 && num <= 90))
            return "an English letter";
        else if (num >= 48 && num <= 57)
            return "a digit";
        else
            return "neither an English letter nor a digit";
    }
}