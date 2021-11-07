package lakscode.problemsolving;

import java.util.Scanner;

public class RepeatString {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String s = scanner.nextLine();
        long n = scanner.nextLong();
        long count =0;

        for (char c :s.toCharArray()){
            if (c == 'a'){
                count++;
            }
        }
        long factor = n /s.length();
        long rem= n%s.length();
        count *= factor;
        for (int i=0;i<rem;i++){
            if (s.charAt(i)=='a'){
                count++;
            }
        }
        System.out.println(count);
//        System.out.println(factor);
//        System.out.println(rem);
    }
}
