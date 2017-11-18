import java.util.Scanner;
public class t1{
    public static void main(String[] args){
        int[][] matrix = new int[3][3];
        Scanner scan = new Scanner(System.in);
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                matrix[i][j] = scan.nextInt();
            }
        }
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < i; j++) {
                int tmp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = tmp;
            }
        }
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                System.out.printf("%d ", matrix[i][j]);
            }
            System.out.println();
        }
    }
}