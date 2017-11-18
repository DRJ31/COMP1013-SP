import java.util.Scanner;
public class opt3{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        String number = scan.next();
        System.out.printf("The number is %d\n", resultNumber(number, number.length(), checkFirst(number)));
    }
    private static boolean checkFirst(String str){
        return str.charAt(0) <= '9' && str.charAt(0) >= '0';
    }
    private static int resultNumber(String number, int length, boolean judge){
        int result = 0;
        if (judge){
            for (int i = 0; i < length; i++)
                result += ((int) number.charAt(length-1-i)-48) * Math.pow(10, i);
            return result;
        }
        else{
            for (int i = 0; i < length - 1; i++)
                result += ((int) number.charAt(length-1-i)-48) * Math.pow(10, i);
            if (number.charAt(0) == '+')
                return result;
            else if (number.charAt(0) == '-')
                return -result;
        }
        return 0;
    }
}