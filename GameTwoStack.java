package lakscode.problemsolving;

import java.util.ArrayList;
import java.util.Scanner;

public class GameTwoStack {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int g = sc.nextInt();
        for (int i=0;i<=g;i++){
            int n = sc.nextInt();
            int m = sc.nextInt();
            int maxsum = sc.nextInt();
            int[] listA = new int[n];
            int[] listB = new int[m];
            for (int a = 0;a<n;a++){
                listA[a] = sc.nextInt();
            }
            for (int b = 0;b<m;b++){
                listB[b] = sc.nextInt();
            }
            solve(listA,listB,maxsum);
        }
    }

    private static void solve(int[] listA, int[] listB, int maxsum) {
        int sum = 0,count=0,j=0 ,i=0;
        while (i<listA.length && sum+listA[i]<=maxsum){
            sum +=listA[i];
            i++;
        }
        count=i;
        while (j< listB.length&&i>=0){
            sum+=listB[j];
            j++;
            while (sum>maxsum&&i>0){
                i--;
                sum-=listA[i];
            }
            if (sum<=maxsum&&i+j>count){
                count=i+j;
            }
        }
        System.out.println(count);
    }
}
