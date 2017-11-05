import java.util.Scanner;
public class t2{
    public static void main(String[] args) {
        double height;
        int times;
        Scanner scan = new Scanner(System.in);
        height = scan.nextDouble();
        times = scan.nextInt();
        scan.close();
        double[] result = distance(height, times);
        System.out.printf("%.2f %.2f\n", result[1], result[0]);
    }
    private static double[] distance(double height, int times){
        double result = -height;
        double[] tmp = new double[2];
        for (int i = 0; i < times; i++){
            result += height * 2;
            height /= 2;
        }
        tmp[0] = result;
        tmp[1] = height;
        return tmp;
    }
}