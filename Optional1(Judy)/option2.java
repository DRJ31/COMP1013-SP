public class option2{
    public static void main(String[] args) {
        int i, j;
        for (i = 1; i <= 7; i++) {
            for (j = 0; j < i; j++) {
                if (i % 2 == 1)
                    System.out.print("# ");
                else
                    System.out.print("+ ");
            }
            System.out.println();
        }
        for (i = 6; i > 0; i--) {
            for (j = 0; j < i; j++) {
                if (i % 2 == 1)
                    System.out.print("# ");
                else
                    System.out.print("+ ");
            }
            System.out.println();
        }
    }
}