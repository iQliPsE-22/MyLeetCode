public class Basic {
    public static String reverseString(String str) {
        String ans = "";
        for (int i = str.length() - 1; i >= 0; i--) {
            ans += str.charAt(i);
        }
        return ans;
    }

    public static int fibonacci(int a) {
        if (a == 0)
            return 0;
        if (a == 1 || a == 2)
            return 1;
        return fibonacci(a - 1) + fibonacci(a - 2);
    }

    public static int prime(int a) {
        if (a == 1)
            return 0;

        for (int i = 2; i <= Math.sqrt(a); i++) {
            if (a % i == 0) {
                return 0;
            }
        }
        return 1;
    }

    public static int gcd(int a, int b) {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }

    public static boolean Palindrome(String str) {
        int i = 0, j = str.length() - 1;
        while (i < j) {
            if (str.charAt(i) != str.charAt(j)) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    public static void main(String[] args) {
        String str = "hello";
        System.out.println(reverseString(str));

        int a = 10;
        System.out.println(fibonacci(a));

        for (int i = 0; i < 10; i++) {
            if (prime(i) == 1) {
                System.out.println("Prime: " + i);
            }
        }

        System.out.println(gcd(15, 36));
        System.out.println(Palindrome("madam"));
    }

}
