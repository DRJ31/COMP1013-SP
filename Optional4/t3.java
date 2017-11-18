import java.util.LinkedList;
import java.util.Scanner;
public class t3{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        LinkedList<String> str = new LinkedList<>();
        String tmp;
        do {
            tmp = scan.next();
            str.add(tmp);
        } while (!tmp.equals("End"));
        System.out.printf("The size of the sentence is %d.\n", str.size());
    }
}