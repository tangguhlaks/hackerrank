package lakscode.problemsolving;

import java.util.ArrayList;
import java.util.Scanner;
import java.util.Vector;

public class ArrayLeftRotation {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int d = scanner.nextInt();
        int[] arr = new int[n];
        for (int i=0;i<n;i++){
            arr[i] = scanner.nextInt();
        }

        solve(arr,n,d);
    }

    private static void solve(int[] arr, int n, int d) {
        int[] arr2 = new int[n];
        for (int i=0;i<n;i++){
            arr2[(i-d+n)%n] = arr[i];
        }
        for (int x : arr2){
            System.out.print(x +" ");
        }
    }
}
