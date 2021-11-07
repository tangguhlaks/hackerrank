package lakscode.problemsolving;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class NewYearChaos {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i=0;i<t;t++){
            int n = sc.nextInt();
            int[] arr = new int[n];
            for (int k=0;k<n;k++){
                arr[k] = sc.nextInt();
            }
            solve(arr);
        }
    }

    private static void solve(int[] arr) {
        int count=0;
        for (int i=arr.length-1;i>=0;i--){
            if (arr[i] != i+1){
                if ((i-1) >= 0 && arr[i-1] == i+1){
                    arr[i-1] = arr[i];
                    arr[i] = arr[i-1];
                    count++;
                }else if ((i-2)>= 0 && arr[i-2] == i+1){
                    arr[i-2] = arr[i-1];
                    arr[i-1] = arr[i];
                    arr[i] = arr[i-2];
                    count+=2;
                }else {
                    System.out.println("Too chaotic");
                    return;
                }
            }
        }
        System.out.println(count);
    }
}
