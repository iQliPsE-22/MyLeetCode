class RectangleInfo {
    int lenght;
    int breadth;

    RectangleInfo(int l, int b) {
        this.lenght = l;
        this.breadth = b;
    }

    void CalculateArea(int lenght, int breadth) {
        System.out.println("Area of rectangle is: " + lenght * breadth);
    }
}

public class Rectangle {
    public static void main(String args[]) {
        RectangleInfo r1 = new RectangleInfo(5, 6);
        RectangleInfo r2 = new RectangleInfo(4, 9);
        r1.CalculateArea(r1.lenght, r1.breadth);
        r2.CalculateArea(r2.lenght, r2.breadth);
    }
}