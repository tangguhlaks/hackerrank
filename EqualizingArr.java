package lakscode.problemsolving;

import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.Scanner;

public class EqualizingArr {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i=0;i<n;i++){
            arr[i] = sc.nextInt();

        }
        int minimalE = sc.nextInt();
        int d = sc.nextInt();
        int count =1;
        int op = 0;
        Arrays.sort(arr);
        if (arr[0] == arr[arr.length-1]){
            count = minimalE;
        }
        while (count  < minimalE) {
            for (int i = 0; i < n-1; i++) {
                arr[i] = arr[i] / d;
                if (arr[i] == arr[i+1]){
                    op++;
                    count++;
                }
            }
//            op += cek(arr,minimalE)*2;
//            count += cek(arr,minimalE);
            for (int i = n-1; i >= 0; i++) {
                arr[i] = arr[i] / d;
                if (arr[i] == arr[i-1]){
                    op++;
                    count++;
                }
            }
        }
        System.out.println(op);
    }


    private static int cek(int[] arr,int minimalE) {
        int c =0;
        for(int i=0;i<arr.length;i++){
            for (int j=0;j<arr.length-1;j++){
                if (arr[i] == arr[j] & i != j){
                    c++;
                }
            }
        }
        return c;
    }

}
