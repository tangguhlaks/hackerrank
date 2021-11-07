package lakscode.problemsolving;

import java.util.Scanner;

public class MergeSort {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int d = sc.nextInt();
            for (int i=0;i<d;i++) {
                int n = sc.nextInt();
                int[] arr = new int[n];
                for (int k = 0; k < n; k++) {
                    arr[k] = sc.nextInt();
                }
                solve(arr, n);
            }
    }

    private static void solve(int[] arr, int n) {
        int ans=0;
        for (int j=0;j<n;j++){
            for (int k=j;k<n-1;k++) {
                if (arr[k] > arr[k + 1] && k + 1 < n && k - 1 >=0) {
                    int temp = arr[k];
                    arr[k] = arr[k + 1];
                    arr[k + 1] = temp;
                    ans++;
                    if (arr[k] < arr[k-1]){
                        int temp2 = arr[k];
                        arr[k] = arr[k - 1];
                        arr[k - 1] = temp2;
                        ans++;
                    }
                }
            }
        }
        System.out.println(ans);
    }


}
