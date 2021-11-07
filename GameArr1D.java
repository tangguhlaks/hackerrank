package lakscode.problemsolving;

import java.util.Scanner;

public class GameArr1D {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int tt=0;tt<t;tt++){
            int n = sc.nextInt();
            int leap = sc.nextInt();
            int[] arr = new int[n];
            for(int i=0;i<n;i++){
                arr[i] = sc.nextInt();
            }
            boolean flag ;
            flag = canWin(leap,arr);
            System.out.println(flag==true?"YES":"NO");
        }
    }
    public static boolean canWin(int leap, int[] game) {
        return isSolvable(leap, game, 0);
    }

    private static boolean isSolvable(int leap, int[] game, int i) {
        // Base Cases
        if (i >= game.length) {
            return true;
        } else if (i < 0 || game[i] == 1) {
            return false;
        }

        game[i] = 1; // marks as visited

        // Recursive Cases
        return isSolvable(leap, game, i + leap) ||
                isSolvable(leap, game, i + 1) ||
                isSolvable(leap, game, i - 1);
    }
}
