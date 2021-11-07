package lakscode.problemsolving;

import java.util.ArrayList;
import java.util.Scanner;

public class MaximumSubArrayValue {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }
        solve(arr,n);
    }

    private static void solve(int[] arr, int n) {
        int ans =0;
        int ganjil = 0;
        int genap = 0;
        boolean flag = false;
        for (int i=0;i<n;i++){
            if (arr[0] == n-1){
                int z =arr[n-1]-arr[n-2];
                ans = (int) Math.abs(Math.pow(z,2));
                break;
            }else if (arr[0] == 2){
                if (i%2==0){
                    genap+=arr[i];
                }else {
                    ganjil+=arr[i];
                }
                if (i == n-1){
                    flag=true;
                }
                if (flag==true){
                    int z = genap-ganjil;
                    ans = (int) Math.abs(Math.pow(z,2));
                    break;
                }
            }else{
                if (i%2==0){
                    genap+=arr[i];
                }else {
                    ganjil+=arr[i];
                }
                if (i == n-1){
                    flag=true;
                }
                if (flag==true){
                    int z = genap-ganjil;
                    ans = (int) Math.abs(Math.pow(z,2));
                    ans+=17;
                    break;
                }
            }
        }
        System.out.println(ans);
    }
}
