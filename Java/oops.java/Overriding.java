class Base {
    void main() {
        System.out.println("Overriding by BASE");
    }
}

class Derived extends Base {
    void main() {
        System.out.println("Overriding by DERIVED");
    }
}

class Overriding {
    public static void main(String[] args) {
        Base ob = new Base();
        Base obj = new Derived();
        ob.main();
        obj.main();
    }
}