package lakscode.problemsolving;

import java.util.Arrays;
import java.util.Scanner;

public class MaxSumoFProduct {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n= sc.nextInt();
        int[] arr = new int[n];
        int[] arr2 = new int[n];
        for (int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        for (int i=0;i<n;i++){
            arr2[i]=sc.nextInt();
        }
        int max =0;
        int sum1 =0;
        int sum2 =0;
        for (int i=0;i<n;i++){
                if( i+2<n){
                    if (arr2[i+1] < arr2[i] && arr[i] < arr[i+1]) {
                        int temp = arr[i];
                        arr[i] = arr[i + 1];
                        arr[i + 1] = temp;
                        sum1 = solve(arr,arr2,n);
                    }
                    if (arr2[i+2] > arr2[i] && arr[i] > arr[i+2]){
                        int temp = arr[i];
                        arr[i] = arr[i+1];
                        arr[i+1] = temp;
                        sum2 = solve(arr,arr2,n);
                    }
            }
                max = Math.max(sum1,sum2);
        }

        System.out.println(max+n);
        for (int a:arr){
            System.out.print(a);
        }
        System.out.println("");
        for (int a:arr2){
            System.out.print(a);
        }

    }

    private static int solve(int[] arr, int[] arr2, int n) {
        int sum =0;
        for (int i=0;i<n;i++){
            sum += arr[i] * arr2[i];
        }
        return sum;
    }
}
