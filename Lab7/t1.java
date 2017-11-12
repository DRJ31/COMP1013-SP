import java.util.Scanner;
public class t1{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int[] numArr = new int[50];
        int i;
        System.out.println("Please input some numbers (input 0 to exit): ");
        for (i = 0; i < 50; i++){
            numArr[i] = scan.nextInt();
            if (numArr[i] == 0)
                break;
        }
        scan.close();
        System.out.println("Among your inputs, the following are positive: ");
        for (int j = 0; j < i; j++){
            if (numArr[j] > 0)
                System.out.printf("%d ", numArr[j]);
        }
        System.out.println();
    }
}