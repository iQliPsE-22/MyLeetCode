class SuperWord {
    String name = "Super";
}

class Sub extends SuperWord {
    String name = "Sub";

    void print() {
        System.out.println(name);
        System.out.println(super.name);
    }
}

public class Super {

    public static void main(String[] args) {
        Sub s = new Sub();
        s.print();
    }
}
