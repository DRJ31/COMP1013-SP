public class option3{
    public static void main(String[] args) {
        int number;
        for (number = 4; number <= 100; number += 2){
            int firstNum = 2;
            boolean status = true;
            while (firstNum <= (number / 2)){
                if (checkPrime(number - firstNum)){
                    System.out.printf("even number: %d = %d + %d\n", number, firstNum, number - firstNum);
                    status = false;
                    break;
                }
                else
                    firstNum = nextPrime(firstNum);
            }
            if (status)
                System.out.println(number);
        }
    }
    private static boolean checkPrime(int a){
        int i;
        for (i = 2; i <= Math.sqrt(a); i++){
            if (a % i == 0)
                return false;
        }
        return true;
    }
    private static int nextPrime(int a){
        int i;
        if (a == 2){
            return 3;
        }
        else{
            for (i = a + 2; ; i += 2){
                if (checkPrime(i)){
                    return i;
                }
            }
        }
    }
}