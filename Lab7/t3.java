import java.util.Scanner;
public class t3{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        String inputWord;
        System.out.println("Please input an English word: ");
        inputWord = scan.next().toLowerCase();
        scan.close();
        for (int i = 0; i < inputWord.length(); i++){
            if (!checkInput(inputWord.charAt(i))){
                System.out.println("Please input an English word!");
                System.exit(-1);
            }
        }
        for (int i = 0; i < inputWord.length() / 2; i++){
            if (inputWord.charAt(i) != inputWord.charAt(inputWord.length() - 1 - i)){
                System.out.println("It's not a palindrome.");
                System.exit(0);
            }
        }
        System.out.println("It's a palindrome.");
    }
    private static boolean checkInput(char a){
        return (a <= 'z' && a >= 'a') || (a <= 'Z' && a >= 'A');        
    }
}