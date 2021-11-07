package lakscode.problemsolving;

import java.util.Scanner;

public class ArrayManipulation {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int[][] quaries = new int[m][3];
        for (int i=0;i<m;i++){
            for (int k=0;k<3;k++){
                quaries[i][k] = sc.nextInt();
            }
        }
        System.out.println(solve(quaries,n));

    }

    private static long solve(int[][] quaries, int n) {
        long count=Long.MIN_VALUE;
        long[] result = new long[n];
        for (int i=0;i<quaries.length;i++){
            int start = quaries[i][0];
            int end = quaries[i][1];
            int add = quaries[i][2];
            result[start-1] += add;
            if (end<n){
                result[end] -= add;
            }
        }
        for (int i=1;i<n;i++){
            result[i] += result[i-1];
            count = Math.max(result[i],count);
        }

        return count;
    }
}
