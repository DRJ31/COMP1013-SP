import java.util.Collections;
import java.util.Scanner;
import java.util.LinkedList;
public class t1{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        LinkedList<Integer> numbers = new LinkedList<>();
        int tmp;
        do {
            tmp = scan.nextInt();
            numbers.add(tmp);
        } while (tmp >= 0);
        numbers.removeLast();
        Collections.sort(numbers);
        for (int i = 0; i < numbers.size(); i++)
            System.out.printf("%d ", numbers.get(i));
        System.out.println();
    }
}