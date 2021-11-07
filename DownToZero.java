package lakscode.problemsolving;

import java.util.ArrayList;
import java.util.Scanner;

public class DownToZero {
    static int[] moves = new int[1000001];

    public static void main(String[] args) {
        for (int i = 1; i <= 1000000; i++) {

            int least = moves[i - 1];
            for (int j = 2; j * j <= i; j++) {
//                System.out.println(i); i =4 baru jalan

                if (i % j == 0) {
                    least = Math.min(least, moves[i / j]);
                }
            }
            moves[i] = ++least;
        }
//        for (int o :moves){
//            System.out.println(o);
//        }
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t-- > 0) {
            System.out.println(moves[in.nextInt()]);
        }
    }
}
