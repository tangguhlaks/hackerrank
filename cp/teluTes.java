package lakscode.problemsolving.cp;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

public class teluTes {
    public static void main(String[] args) {
        // saya tidak biasa problem solving pake python
        // saya menggunakan java atau c++
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }
        Arrays.sort(arr);
        int re = Integer.MAX_VALUE;
        for (int i=0;i<n;i++){
            if (i+1 != n) {
                int temp = arr[i + 1] - arr[i];
                if (temp < re) {
                    re = temp;
                }
            }
        }
        System.out.println(re);
    }
}
