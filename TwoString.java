package lakscode.problemsolving;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

public class TwoString {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i=0;i<n;i++){
            char[] s1 = sc.next().toCharArray();
            char[] s2 = sc.next().toCharArray();
            boolean output = false;
            Arrays.sort(s1);
            Arrays.sort(s2);
            for (int j=0;j<s1.length;j++){
                int k=0;
                    while (k<s2.length){
                    if (s1[j] == s2[k] || s1[s1.length-1-j] == s2[k]){
                        output = true;
                        k=s2.length-1;
                        break;
                    }
                    k++;
                }
            }
            System.out.println(output==true?"YES":"NO");
        }
    }
}
