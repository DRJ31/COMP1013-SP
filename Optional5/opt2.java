import java.util.Scanner;
public class opt2{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int[] numbers = new int[50];
        System.out.println("Please input numbers, input 0 to exit: ");
        int i;
        for (i = 0; i < 50; i++){
            numbers[i] = scan.nextInt();
            if (numbers[i] == 0)
                break;
        }
        scan.close();
        int[] result = bubbleSort(numbers, i);
        for (int j = 0; j < i; j++){
            System.out.printf("%d ", result[j]);
        }
    }
    private static int[] bubbleSort(int[] arr, int length){
        int status = 0;
        do {
            status = 0;
            for (int i = 1; i < length; i++){
                if (arr[i-1] < arr[i]){
                    int tmp = arr[i-1];
                    arr[i-1] = arr[i];
                    arr[i] = tmp;
                    status = 1;
                }
            }
        }while (status != 0);
        return arr;
    }
}