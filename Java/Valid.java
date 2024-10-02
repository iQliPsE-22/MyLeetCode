import java.util.HashMap;

public class Valid {
    public static void main(String[] args) {
        String s = "hello";
        HashMap<Character, Integer> map = new HashMap<>();
        HashMap<Character, Integer> map2 = new HashMap<>();
        for (char c : s.toCharArray()) {
            map.put(c, map.getOrDefault(c, 0) + 1);
        }

    }
}
