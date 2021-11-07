package lakscode.problemsolving;

import java.util.Scanner;

public class SparseArr {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[] stringg = new String[n];
        for (int i=0;i<n;i++){
            stringg[i] = sc.next();
        }
        int q = sc.nextInt();
        String[] quaries = new String[q];
        for (int i=0;i<q;i++){
            quaries[i] =sc.next();
        }

        solve(stringg,quaries);
    }

    private static void solve(String[] stringg, String[] quaries) {
        int[] rrr = new int[quaries.length];
        int i=0;
        for (String quars : quaries){
            int count=0;
            for (String st : stringg){
                if (quars.equals(st)){
                    count++;
                }
            }
            rrr[i] =count;
            i++;
        }

        for (int r : rrr){
            System.out.println(r);
        }

    }
}
