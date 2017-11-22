import java.util.Scanner;
public class t1{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        String str = scan.nextLine();
        System.out.printf("There are %d words in the line.\n", checkCharacterNumbers(str));
    }
    private static int checkCharacterNumbers(String str){
        int result = 0;//The number of spaces
        if (checkLetter(str.charAt(0)))
            result++;
        for (int i = 0; i < str.length(); i++){
            if (str.charAt(i) == ' ' && checkLetter(str.charAt(i+1)))
                result++;
        }
        return result;
    }
    private static boolean checkLetter(char a){
        return (a <= 'z' && a >= 'a') || (a <= 'Z' && a >= 'A');
    }
}