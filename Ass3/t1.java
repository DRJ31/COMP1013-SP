import java.util.Scanner;
public class t1{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int[] arr = {3, 10, 15, 30, 55, 77};
        int i;
        System.out.println("Please input a integer: ");
        int number = scan.nextInt();
        for (i = 0; i < arr.length; i++){
            if (arr[i] > number)
                break;
            System.out.printf("%d ", arr[i]);
        }
        System.out.printf("%d ", number);
        for (; i < arr.length; i++)
            System.out.printf("%d ", arr[i]);
        System.out.println();
    }
}