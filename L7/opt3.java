import java.util.Scanner;
import java.text.DecimalFormat;
public class opt3{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        String number = scan.next();
        if (checkPointPos(number) == 0)
            System.out.printf("The number is %f\n", resultNumber(number, number.length(), checkFirst(number)));
        else
            System.out.printf("The number is %s\n", new DecimalFormat().format(resultNumber(number, checkPointPos(number), checkFirst(number)) + resultFloatNum(number, checkPointPos(number), number.length())));
    }
    private static boolean checkFirst(String str){
        return str.charAt(0) <= '9' && str.charAt(0) >= '0';
    }
    private static double resultNumber(String number, int length, boolean judge){
        double result = 0;
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
    private static int checkPointPos(String str){
        for (int i = 0; i < str.length(); i++) {
            if (str.charAt(i) == '.')
                return i;
        }
        return 0;
    }
    private static double resultFloatNum(String str, int begin, int length){
        double result = 0;
        for (int i = begin + 1; i < length; i++)
            result += ((int)str.charAt(i) - 48) * Math.pow(0.1, i - begin);
        if (str.charAt(0) == '-')
            return -result;
        return result;
    }
}