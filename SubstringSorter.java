import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class SubstringSorter {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();

        ArrayList<String> substrings = new ArrayList<>();

        for (int i = 0; i < input.length(); i++) {
            for (int j = i + 1; j <= input.length(); j++) {
                substrings.add(input.substring(i, j));
            }
        }

        Collections.sort(substrings);

        for (String s : substrings) {
            System.out.println(s);
        }
    }
}
