package lakscode.problemsolving;

import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Anagram {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n= sc.nextInt();

        for (int i=0;i<n;i++){
            solve(sc.next());
        }
    }

    private static void solve(String string) {
        Map<String,Integer> mymap = new HashMap<>();
        for (int i=0;i<string.length();i++){
            for (int j=i;j<string.length();j++){
                char[] arr = string.substring(i,j+1).toCharArray();
                Arrays.sort(arr);
                String k = new String(arr);
                System.out.println(k);
                if (mymap.containsKey(k)){
                    mymap.put(k,mymap.get(k)+1);
                }else {
                    mymap.put(k,1);
                }
            }
        }
        int count =0;
        System.out.println("=======");
        for (String x : mymap.keySet()){
            int v = mymap.get(x);
            System.out.println(x);
            count += (v * (v-1))/2;
        }
        System.out.println(count);
    }

}
