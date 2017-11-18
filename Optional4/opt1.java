import java.util.Scanner;
import java.util.LinkedList;
import java.util.Collections;
public class opt1{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        LinkedList<String> str = new LinkedList<>();
        String reversed;
        do {
            reversed = new StringBuilder(scan.next()).reverse().toString();
            str.add(reversed);
        } while (!reversed.equals("dnE"));
        str.removeLast();
        Collections.reverse(str);
        for (int i = 0; i < str.size(); i++)
            System.out.printf("%s ", str.get(i));
        System.out.println();
    }
}