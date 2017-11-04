public class t2{
    public static void main(String[] args){
        for (int i = 3; i < 1000; i += 3){
            if (checkNumber(i))
                System.out.printf("%d [OK]\n", i);
            else
                System.out.printf("%d [failed]\n", i);
        }

    }
    private static boolean checkNumber(int number){
        int result = 0, j = 0;
        while (j < 50){
            while (number >= 1){
                result += Math.pow((double)(number % 10), 3.0);
                number /= 10;
            }
            if (result != 153){
                number = result;
                result = 0;
            }
            else
                return true;
            j++;
        }
        return false;
    }
}