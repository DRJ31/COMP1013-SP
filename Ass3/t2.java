import java.util.Scanner;
public class t2{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        String str = scan.nextLine();
        for (int i = 0; i < str.length(); i++){
            if (isLetter(str.charAt(i)))
                System.out.print(str.charAt(i));
        }
    }
    private static boolean isLetter(char a){
        return (a <= 'z' && a >= 'a') || (a <= 'Z' && a >= 'A');
    }
}