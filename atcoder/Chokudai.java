package lakscode.problemsolving.atcoder;

import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Chokudai {
    public static void main(String[] args) {
        Scanner sc=  new Scanner(System.in);
        int n= sc.nextInt();
        int m=sc.nextInt();
        int[] arr = new int[m];
        int[] arr2 = new int[m];
        Map<Integer,String> map = new HashMap<>();
        for (int i=0;i<m;i++){
            arr[i] =sc.nextInt();
            arr2[i] =sc.nextInt();
            if (arr[i] == 1){
                map.put(i,"road1");
            }
            if (arr2[i] == 1){
                map.put(i,"road2");
            }
        }
        for (int i=0;i<m;i++){
            for (int j=0;j<m;j++){

            }
        }

    }
}
