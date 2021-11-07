package lakscode.problemsolving.cp;

import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.Scanner;

public class MinimumProsesTime {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] prosesor = new int[n];
        for (int i=0;i<n;i++){
            prosesor[i] = sc.nextInt();
        }
        int nTask = sc.nextInt();
        int[] task = new int[nTask];

        for (int i=0;i<nTask;i++){
            task[i] = sc.nextInt();
        }
        if (n == 1){
            Arrays.sort(task);
            int max = task[task.length-1];
            System.out.println(max+prosesor[0]);
        }else{
            int[] arrA = new int[nTask/2];
            int[] arrB = new int[nTask/2];
            for (int i=0;i<nTask/2;i++){
                arrA[i] = task[i];
                arrB[i] = task[nTask-1-i];
            }
            Arrays.sort(arrA);
            Arrays.sort(arrB);
            int maxA = arrA[arrA.length-1] + prosesor[0];
            int maxB = arrA[arrA.length-1] + prosesor[1];
            System.out.println(Math.max(maxA,maxB));
        }

    }
}
