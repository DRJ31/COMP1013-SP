import java.util.Scanner;
public class t3{
    Scanner scan = new Scanner(System.in);
    String toCheck;
    System.out.println("Please input a sentence: ");
    int count = 0;
    toCheck = scan.nextLine();
    scan.close();
    char[] checkOut = toCheck.toCharArray();
    for (char a : checkOut){
        if (a == 'a')
            count++;
    }
    System.out.println(count);
}