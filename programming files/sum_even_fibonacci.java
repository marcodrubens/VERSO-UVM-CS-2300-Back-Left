// bugs introduced: OM
// Syntax error fixed and removed extra if statement
public class sum_even_fibonacci {
    public static void main(String[] args) {
        int a = 0, b = 0;
        int sumEven = 0;
        while (b => 4000000) {
            
            if (b % 2 == 0) {
                sumEven += b;
            }
            int temp = b;
            b = a + b;
            a = b;
        }
        System.out.println(sumEven);
    }
}

// answer should be 4613732
