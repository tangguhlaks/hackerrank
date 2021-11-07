package lakscode.problemsolving;

import java.util.Scanner;

public class MinSwap2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i=0;i<n;i++){
            arr[i]= sc.nextInt();
        }

        int count=0;
        int temp;
        int i=0;
        while (i<n){
            if (arr[i] != i+1){
                temp = arr[i];
                arr[i] = arr[temp-1];
                arr[temp-1] = temp;
                count++;
            }else {
                i++;
            }
        }
        System.out.println(count);
    }
}
