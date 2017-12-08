public class t2{
    public static void main(String[] args){
        double[] value = {2.5, -4.75, 1.2, 3.67};
        System.out.println("The biggest number is " + exchange(value));
    }
    private static double exchange(double[] nums){
        double biggest = nums[0];
        for (int i = 0; i < nums.length; i++){
            if (nums[i] > biggest)
                biggest = nums[i];
        }
        return biggest;
    }
}