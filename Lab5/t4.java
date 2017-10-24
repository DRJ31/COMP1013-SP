import java.util.Scanner;
public class t4{
    public static void main(String[] args) {
        char gpa;
        Scanner scan = new Scanner(System.in);
        System.out.println("Please input the GPA grade: ");
        gpa = scan.next().toCharArray()[0];
        scan.close();
        switch (gpa)
        {
            case 'A':
            case 'a':
                System.out.println("4.00");
                break;
            case 'B':
            case 'b':
                System.out.println("3.00");
                break;
            case 'C':
            case 'c':
                System.out.println("2.00");
                break;
            case 'D':
            case 'd':
                System.out.println("1.00");
                break;
            case 'F':
            case 'f':
                System.out.println("0.00");
                break;
            default:
                System.out.println("Please input the correct GPA grade.");
                break;
        }
    }
}