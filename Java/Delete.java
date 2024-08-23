import java.util.HashMap;

class ListNode {
    int val;
    ListNode next;

    ListNode(int val) {
        this.val = val;
        this.next = null;
    }
}

public class Delete {

    public void add(ListNode head, int val) {
        ListNode current = head;
        ListNode newNode = new ListNode(val);
        while (current.next != null) {
            current = current.next;
        }
        current.next = newNode;
    }

    public static void main(String[] args) {
        Delete delete = new Delete();
        ListNode head = new ListNode(1);

        delete.add(head, 1);
        delete.add(head, 1);
        delete.add(head, 2);
        delete.add(head, 3);

        HashMap<Integer, Integer> map = new HashMap<>();
        ListNode current = head;
        System.out.print("List before removing duplicates: ");

        while (current != null) {
            System.out.print(current.val + " ");
            map.put(current.val, map.getOrDefault(current.val, 0) + 1);
            current = current.next;
        }

        System.out.println();

        ListNode dummy = new ListNode(0);
        dummy.next = head;
        ListNode prev = dummy;
        current = head;

        while (current != null) {
            if (map.get(current.val) > 1) {
                prev.next = current.next;
            } else {
                prev = current;
            }
            current = current.next;
        }

        System.out.print("List after removing duplicates: ");
        current = dummy.next;
        while (current != null) {
            System.out.print(current.val + " ");
            current = current.next;
        }
    }
}
