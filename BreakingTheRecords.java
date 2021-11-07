package lakscode.problemsolving;

import java.util.Scanner;

public class BreakingTheRecords {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] score = new int[n];
        for (int i = 0; i < n; i++) {
            score[i] = scanner.nextInt();
        }
        System.out.println(breakingScore(score).toString());
    }

    public static int[] breakingScore(int[] scores) {
        int[] result = new int[2];
        int min=scores[0] , max=scores[0];
        for (int i=0;i<scores.length;i++){
            if (scores[i]<min){
                min++; }
            if (scores[i]>max){
                max++;
            }
        }
        result[0] = max;result[1] =min;
        return result;
    }
}