import java.util.Scanner;
import java.text.DecimalFormat;
public class t3{
    public static void main(String[] args) {
        double dollar;
        char currency;
        DecimalFormat formated = new DecimalFormat();
        Scanner scan = new Scanner(System.in);
        System.out.println("Please input the amount of US dollars: ");
        dollar = scan.nextDouble();
        System.out.println("Convert to Euro(E) or RMB(R)?");
        currency = scan.next().toCharArray()[0];
        scan.close();
        if (currency == 'E')
            System.out.println(formated.format(dollar) + " US dollars converts to " + formated.format(dollar*0.5) +" euros.\n");
        else if (currency == 'R')
            System.out.println(formated.format(dollar) + " US dollars converts to " + formated.format(dollar*7) +" RMB.\n");
        else
            System.out.println("Please input the right character.");
    }
}