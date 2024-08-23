import java.util.Stack;

public class Largest {
    public static void main(String[] args) {
        Stack<Integer> stack = new Stack<Integer>();

        for (int i = 0; i < 10; i++) {
            stack.push(i);
        }
        int ans = -1;
        while (!stack.isEmpty()) {
            if (stack.peek() > ans) {
                ans = stack.pop();
            } else {
                stack.pop();
            }
        }
        System.out.println(ans);
    }
}
