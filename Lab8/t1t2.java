import java.text.DecimalFormat;
public class t1t2{
    public static void main(String[] args){
        double[] value = {2.5, -4.75, 1.2, 3.67};
        String bigValue = findBiggest(value);
        String smallValue = findSmallest(value);
        System.out.printf("bigValue = %s\nsmallValue = %s\n", bigValue, smallValue);
    }
    private static String findBiggest(double[] a){
        double biggest = a[0];
        for (int i = 1; i < a.length; i++){
            if (a[i] > biggest)
                biggest = a[i];
        }
        return new DecimalFormat().format(biggest);
    }
    private static String findSmallest(double[] a){
        double smallest = a[0];
        for (int i = 1; i < a.length; i++){
            if (a[i] < smallest)
                smallest = a[i];
        }
        return new DecimalFormat().format(smallest);
    }
}