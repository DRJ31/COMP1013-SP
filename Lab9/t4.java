import java.util.Scanner;
public class t4{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        String firstString, secondString;
        System.out.println("Please input the first string.");
        firstString = scan.next();
        System.out.println("Please input the second string.");
        secondString = scan.next();
        if (isSubstring(firstString, secondString))
            System.out.println("The first string is a substring of the second.");
        else
            System.out.println("The first string is not a substring of the seond.");
    }
    private static boolean isSubstring(String first, String second){
        if (first.length() > second.length())
            return false;
        for (int i = 0; i < second.length(); i++){
            if (second.charAt(i) == first.charAt(0)){
                int j;
                for (j = 0; j < first.length(); j++){
                    if (second.charAt(i+j) != first.charAt(j))
                        break;
                }
                if (j == first.length())
                    return true;
            }
        }
        return false;
    }
}