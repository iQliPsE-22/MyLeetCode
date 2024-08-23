class Student {
    int id;
    String name;
    int age;

    Student(int id, String name, int age) {
        this.id = id;
        this.name = name;
        this.age = age;
    }
}

public class TestStudent {
    public static void main(String args[]) {
        Student s1 = new Student(1, "Deepak", 25);
        Student s2 = new Student(1, "Deepak", 25);
        System.out.println(s1.id + " " + s1.name + " " + s1.age);
        System.out.println(s2.id + " " + s2.name + " " + s2.age);
    }
}
