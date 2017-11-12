public class t4{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int i, j, k, num;
        System.out.print("How many lines should we draw? ");
        num = scan.nextInt();
        scan.close();
        for (i = 0; i <= num; i++){
            for (j = 0; j <= num - i; j++)
                System.out.print(" ");
            for (k = 0; k < 2 * i - 1; k++)
                System.out.print("*");
            System.out.println();
        }
    }
}