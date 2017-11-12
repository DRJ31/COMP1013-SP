public class t13{
    public static void main(String[] args) {
        int sum = 0, i;
        for (i = 0; i <= 100; i++){
            if (i % 2 == 1)
                sum += i;
        }
        System.out.printf("i = %d, sum = %d\n", i, sum);
    }
}