
import java.util.LinkedList;
import java.util.Collections;

public class List {

    public static void main(String[] args) {
        LinkedList<Integer> linkedList = new LinkedList<>();

        for (int i = 0; i < 10; i++) {
            linkedList.add(i);
        }
        // Reverse the linked list without using built-in methods
        LinkedList<Integer> reversedList = new LinkedList<>();
        for (int i = linkedList.size() - 1; i >= 0; i--) {
            reversedList.add(linkedList.get(i));
        }
        linkedList = reversedList;
        linkedList.add(10);
        // Print the linked list
        System.out.println(linkedList);
    }
}
