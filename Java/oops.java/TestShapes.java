abstract class Shape {
    abstract int calculateArea();
}

class Circle extends Shape {
    int radius;

    Circle(int r) {
        radius = r;
    }

    @Override
    int calculateArea() {
        return (int) (Math.PI * radius * radius);
    }
}

class Rectangle extends Shape {
    int length;
    int breadth;

    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    @Override
    int calculateArea() {
        return length * breadth;
    }
}

public class TestShapes {
    public static void main(String[] args) {
        Shape myCircle = new Circle(10);
        Shape myRectangle = new Rectangle(5, 7);

        System.out.println("Area of the circle: " + myCircle.calculateArea());
        System.out.println("Area of the rectangle: " + myRectangle.calculateArea());
    }
}
