import java.util.Scanner;
public class t2{
    public static void main(String[] args) {
        int height, weight;
        Scanner scan = new Scanner(System.in);
        System.out.println("Please input your height(cm): ");
        height = scan.nextInt();
        System.out.println("Please input your weight(kilo): ");
        weight = scan.nextInt();
        scan.close();
        if ((height - 105) > (weight + 20))
            System.out.println("You are too slim.");
        else
        {
            if (((weight - 10) < (height - 105)) && ((height - 105) <= (weight + 20)))
                System.out.println("You are fit.");
            else
                System.out.println("You are too fat.");
        }
    }
}