class Simple {
    void BasePrint() {
        System.out.println("Base Class");
    }
}

class Derived extends Simple {
    void print() {
        System.out.println("Derived Class");
    }

}

public class Base {
    public static void main(String[] args) {
        Derived obj = new Derived();
        obj.BasePrint();
        obj.print();
    }

}