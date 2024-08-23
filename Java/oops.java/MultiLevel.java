class Animal {
    public void print() {
        System.out.println("Animal");
    }
}

class Dog extends Animal {
    public void print() {
        System.out.println("Dog");
    }
}

class Puppy extends Dog {
    public void print() {
        System.out.println("Puppy");
    }
}

public class MultiLevel {
    public static void main(String[] args) {
        Animal obj1 = new Dog();
        Dog obj2 = new Puppy();
        obj1.print();
        obj2.print();
    }
}
