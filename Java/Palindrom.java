class Palindrom {
    static void print(String s) {
        char[] ans = new char[s.length()];
        for (int i = s.length() - 1; i >= 0; i--) {
            ans[s.length() - 1 - i] = s.charAt(i);
        }
        String temp = new String(ans);
        if (temp.equals(s))
            System.out.println(ans);
    }

    public static void main(String[] args) {
        String s = "abbaba";
        print(s);
    }
}