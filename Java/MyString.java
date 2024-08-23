public class MyString {
    public static void main(String[] args) {
        String str = "Hello, World!";
        str = "W" + str.substring(1); 
        System.out.println(str); // This will print 'W'
    }
}
