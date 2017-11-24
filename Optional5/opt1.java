import java.util.Scanner;
public class opt1{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        System.out.println("Please input the first string: ");
        String str1 = scan.next();
        System.out.println("Please input the second string: ");
        String str2 = scan.next();
        System.out.println("The return value is " + stringCompare(str1, str2));
    }
    private static int stringCompare(String s1, String s2){
        for (int i = 0; i < s1.length(); i++){
            if (s1.charAt(i) > s2.charAt(i)){
                return 1;
            }
            else if (s1.charAt(i) < s2.charAt(i)){
                return -1;
            }
        }
        if (s1.length() < s2.length())
            return -1;
        return 0;
    }
}