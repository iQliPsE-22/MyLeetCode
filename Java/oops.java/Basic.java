public class Basic {

    int length;
    int breadth;

    Basic(int l, int b) {
        length = l;
        breadth = b;
    }

    public int area() {
        return length * breadth;
    }

    public static void main(String[] args) {
        Basic rect = new Basic(10, 20);
        System.out.println("Area of rectangle: " + rect.area());
    }
}
