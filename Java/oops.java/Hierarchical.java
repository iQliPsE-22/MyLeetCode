class A {
    void show() {
        System.out.println("A");
    }
}

class B extends A {
    void show() {
        System.out.println("B");
    }
}

class C extends A {
    void show() {
        System.out.println("C");
    }
}

public class Hierarchical {

    public static void main(String[] args) {
        A obj1 = new B();
        A obj2 = new C();
        obj1.show();
        obj2.show();
    }
}