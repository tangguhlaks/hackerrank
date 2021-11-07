package lakscode.problemsolving;

import java.util.ArrayList;
import java.util.Map;
import java.util.Scanner;

public class SherlockSquare {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i=0;i<n;i++){
            int a = sc.nextInt();
            int b = sc.nextInt();
            int aa = (int) Math.ceil(Math.sqrt(a));
            int bb = (int) Math.floor(Math.sqrt(b));
            int count = bb - aa + 1;
            System.out.println(count);
        }
    }

}
