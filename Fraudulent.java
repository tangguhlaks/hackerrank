package lakscode.problemsolving;

import java.util.Arrays;
import java.util.Scanner;

public class Fraudulent {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n= sc.nextInt();
        int d= sc.nextInt();
        int[] arr = new int[n];
        int[] md = new int[d];
        for (int i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }
        for (int i=0;i<d;i++){
            md[i] = arr[i];
        }
        Arrays.sort(md);
        double median = md[d/2];
        int ans =0;
        for (int i=d;i<n;i++){
            if(arr[i] > 2*median){
                ans++;
            }
        }
        System.out.println(ans);
    }


}
