package lakscode.problemsolving;

import java.util.Scanner;

public class TheBirthDayBar {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] bar = new int[n];
        for (int i=0;i<n;i++){
            bar[i] = scanner.nextInt();
        }
        int d = scanner.nextInt();
        int m = scanner.nextInt();
        int[] sum = new int[1000];
        sum[0] =0;
        int count = 0;
        for (int i=0;i<n;i++){
            sum[i+1]=sum[i]+bar[i];
        }
        for (int i=0;i<=n-m;i++){
            if (sum[i+m]-sum[i]==d){
                count++;
            }
        }
        System.out.println(count);
    }
}
