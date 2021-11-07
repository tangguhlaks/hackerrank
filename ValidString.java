package lakscode.problemsolving;

import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class ValidString {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        char[] cc = s.toCharArray();
        Arrays.sort(cc);
        Map<Character,Integer> map = new HashMap();
        for(char x : cc){
            if (map.containsKey(x) == true){
                map.put(x, map.get(x) + 1);
            }else {
                map.put(x,1);
            }
        }
        boolean how = false;
        int[] count =  new int[map.size()];
        int i = 0;
        for (char x : map.keySet() ){
            count[i] = map.get(x);
            i++;
        }
        Arrays.sort(count);
        for (int x: count){
            System.out.println(x);
        }
        if (count[0] == count[count.length-1]){
            how = true;
        }else if (count[0] == 1 && count[1] == count[count.length-1]){
            how = true;
        }else if (count[0] == count[1] && count[1]==count[count.length-2]&& count[count.length-2] == count[count.length-1]-1){
            how = true;
        }
        System.out.println(how==true?"YES":"NO");
    }
}
