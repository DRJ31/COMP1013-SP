import java.util.Scanner;
public class t4{
    public static void main(String[] args) {
        int[] numMat = new int[9];
        Scanner scan = new Scanner(System.in);
        for (int i = 0; i < 9; i++)
            numMat[i] = scan.nextInt();
        scan.close();
        System.out.printf("%d %d %d\n", numMat[0] + numMat[4] + numMat[8], numMat[2] + numMat[4] + numMat[6], numMat[4]);
    }    
}