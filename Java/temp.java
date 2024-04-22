public class temp {
    public static void main(String[] args) {
        int a = 5; // First element
        int b = -2; // Second element
        int c = -4;
        int d = c;
        int diff = b - a; // -7
        int diff2 = c - b; // -2
        int n = 14;
        System.out.print(a + ", " + b + ", " + c + ", ");
        for (int i = 3; i <= n; i++) {
            d = d + diff;     //-4 + -7
            System.out.print(d + ", ");
            d = d + diff2;
            System.out.print(d + ", ");

        }
    }
}
