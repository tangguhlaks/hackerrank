package lakscode.problemsolving.atcoder;

import java.text.DecimalFormat;
import java.util.Scanner;

public class BloodPreasure {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        double a = sc.nextInt();
        double b = sc.nextInt();
        double t = (a-b)/3+b;
        System.out.println(t);
    }
}
