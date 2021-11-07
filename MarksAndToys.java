package lakscode.problemsolving;

import java.util.Arrays;
import java.util.Scanner;

public class MarksAndToys {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Long k = sc.nextLong();
        Long[] arr = new Long[n];
        for(int i=0;i<n;i++){
            arr[i] = sc.nextLong();
        }
        Arrays.sort(arr);
        int count=0;
        for (int i=0;i<n;i++){
            if (k -arr[i]>0){
                k -= arr[i];
                count++;
            }else {
                break;
            }
        }
        System.out.println(count);
    }
}
