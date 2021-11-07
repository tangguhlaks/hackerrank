package lakscode.problemsolving;

import java.util.Scanner;

public class DownToZeroByMe {

    public static void main(String[] args) {
        int[] moves = new int[1000001];

        for (int i=1;i<=1000000;i++){

            int least = moves[i-1];
            for (int j=2;j*j<=i;j++){
                if (i % j == 0){
                    least = Math.min(least,moves[i/j]);
                }
            }
            moves[i] = 1+least;
        }
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i=0;i<n;i++){
            int m=sc.nextInt();
            System.out.println(moves[m]);
        }
    }
}
