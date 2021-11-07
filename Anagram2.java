package lakscode.problemsolving;

import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Anagram2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.next();
        String b = sc.next();
        int[] freq = new int[26];
        a.chars().forEach((c) -> {
            freq[c - 97]++;
        });
        b.chars().forEach((c) -> {
            freq[c - 97]--;
        });
        System.out.println(Arrays.stream(freq).map(Math::abs).sum());
    }
}
