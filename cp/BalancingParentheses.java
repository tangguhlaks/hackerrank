package lakscode.problemsolving.cp;

import java.util.Scanner;

public class BalancingParentheses {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        char[] arr = s.toCharArray();
        char p = '(';
        char n = ')';
        int countP =0;
        int countN =0;
        for (char x : arr){
            if(x == p){
                countP++;
            }else if (x == n){
                countN++;
            }
        }
        int output =0;
        if (countN > countP) {
            output =  countN - countP;
        }else if (countP > countN){
            output = countP -countN;
        }else if (countN == countP){
            output = 0;
        }
        System.out.println(output);
    }
}
