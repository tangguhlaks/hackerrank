package lakscode.problemsolving;

import java.util.Scanner;

public class ArrReverse {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }
        reverse(arr);
    }

    private static void reverse(int[] arr) {
        int[] rearr = new int[arr.length];
        for (int i=0;i<arr.length;i++){
            rearr[i] = arr[arr.length-1-i];
        }

        for (int r : rearr){
            System.out.print(r+" ");
        }
    }
}
