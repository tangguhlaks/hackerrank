package lakscode.problemsolving;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class ParentDayPuzle {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int n = sc.nextInt();
        String[] a = new String[n];
        String[] b = new String[n];
        for (int i=0;i<n;i++){
            a[i] = sc.next();
        }
        for (int i=0;i<n;i++){
            b[i] = sc.next();
        }

        ArrayList<String> OP = new ArrayList<>();
        Map<Character,Integer> mmap = new HashMap();
        Map<Character,Integer> mmap2 = new HashMap();
        String aaa = "abcdefghijklmnopqrstuvwxyz";
        char[] alpha = aaa.toCharArray();
        for (int i=0;i<n;i++){
            char[] charsA = a[i].toCharArray();
            char[] charsB = b[i].toCharArray();
            if (a[i].equals(b[i]) || a[i].length() == 1){
                OP.add("YES");
            }else {
                for (int j = 0; j < charsA.length; j++) {
                    if(mmap.containsKey(charsA[j])){
                        mmap.put(charsA[j],mmap.get(charsA[j])+1);
                    }else {
                        mmap.put(charsA[j],1);
                    }
                }
                for (int j = 0; j < charsB.length; j++) {
                    if(mmap2.containsKey(charsB[j])){
                        mmap2.put(charsB[j],mmap2.get(charsB[j])+1);
                    }else {
                        mmap2.put(charsB[j],1);
                    }
                }

            }
            int c=0;
            for (char x:alpha){
                if (mmap.containsKey(x) && mmap2.containsKey(x)){
                    if (mmap.get(x) != mmap2.get(x)){
                        int temp = mmap.get(x) + mmap2.get(x);
                        if (temp != mmap.get(x) || temp != mmap.get(x)){

                        }
                    }else {
                        OP.add("YES");
                    }
                }else if (mmap.containsKey(x) || mmap2.containsKey(x)){

                }
            }
        }

        for (String x : OP){
            System.out.println(x);
        }
    }
}
