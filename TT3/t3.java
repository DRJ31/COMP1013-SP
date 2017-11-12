import java.util.Scanner;
import java.util.List;
import java.util.LinkedList;
public class t3{
    public static void main(String[] args) {
        int range;
        Scanner scan = new Scanner(System.in);
        range = scan.nextInt();
        scan.close();
        for (int i = 1; i <= range; i++){
            List<Integer> factor = factors(i);
            if (checkPerfect(factor, i)){
                System.out.printf("%d its factors are ", i);
                for (int j = 0; j < factor.size(); j++)
                    System.out.printf("%d ", factor.get(j));
                System.out.println();
            }
        }
    }
    private static List<Integer> factors(int number){
        List<Integer> arr = new LinkedList<Integer>();
        for (int i = 1; i < number; i++){
            if (number % i == 0){
                arr.add(i);
            }
        }
        return arr;
    }
    private static boolean checkPerfect(List<Integer> arr, int number){
        int result = 0;
        for (int i = 0; i < arr.size(); i++){
            result += arr.get(i);
        }
        return result == number;
    }
}