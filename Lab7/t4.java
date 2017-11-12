import java.util.Scanner;
public class t4{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int[] matrix = new int[4];
        System.out.println("Please input matrix 1 (2*2): ");
        for (int i = 0; i < 4; i++)
            matrix[i] = scan.nextInt();
        System.out.println("Please input matrix 2 (2*2): ");
        for (int i = 0; i < 4; i++)
            matrix[i] += scan.nextInt();
        System.out.println("The SUM matrix is: ");
        System.out.printf("%d\t%d\n%d\t%d\n", matrix[0], matrix[1], matrix[2], matrix[3]);
    }
}