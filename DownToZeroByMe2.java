package lakscode.problemsolving;

import java.util.Scanner;

public class DownToZeroByMe2 {
    public static void main(String[] args) {
        int[] moves = new int[1000001];
        moves[0]=0;
        moves[1]=1;
        moves[2]=2;
        moves[3]=3;
        for (int i=4;i<=1000000;i++){
            int prev = moves[i-1];
            for (int j=2;j*j<=i;j++){
                if (i%j==0){
                    prev = Math.min(prev,moves[i/j]);
                }
            }
            moves[i] =prev+1;
        }
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i=0;i<n;i++){
            System.out.println(moves[sc.nextInt()]);
        }
    }
}
