public class Reverse {
    static void reverseNumber(String s) {
        char[] ans = new char[s.length()];
        for (int i = ans.length - 1; i >= 0; --i)
            ans[s.length() - i - 1] = s.charAt(i);
        String temp = new String(ans);
        System.out.println(temp);
    }

    public static void main(String[] Args) {
        String number = "1234567890";
        reverseNumber(number);

    }
}
