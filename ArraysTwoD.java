package lakscode.problemsolving;

import java.util.Scanner;

public class ArraysTwoD {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int arrayyy[][] = new int[6][6];
        for (int i=0;i<6;i++){
            for (int j=0;j<6;j++){
                arrayyy[i][j] = scanner.nextInt();
            }
        }
        System.out.println(solve(arrayyy));
    }

    private static int solve(int[][] arrayyy) {
        int total=0;
        int max = 0;
        for (int i=0;i<4;i++){
            for (int j=0;j<4;j++){
                total = arrayyy[i][j]+arrayyy[i][j+1]+arrayyy[i][j+2];
                total += arrayyy[i+1][j+1];
                total += arrayyy[i+2][j] +arrayyy[i+2][j+1]+arrayyy[i+2][j+2];
                max =total>max?total:max;
            }
        }
        return max;
    }
}
