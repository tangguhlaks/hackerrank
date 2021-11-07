package lakscode.problemsolving;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class FrequencyQuery {
    public static void main(String[] args) {
        Scanner sc =  new Scanner(System.in);
        int n = sc.nextInt();
        Map<Integer,Integer> map = new HashMap<>();
        ArrayList<Integer> mlist = new ArrayList<>();
        for (int i =0; i<n;i++){
            int a= sc.nextInt();
            int b= sc.nextInt();
            int v =0;
            boolean test = false;
            if (a != 3 && map.containsKey(b)){
                v = map.get(b);
                test = true;
            }
            if (a == 1){
                if (test){
                    map.put(b,v+1);
                }else{
                    map.put(b,1);
                }
            }else if (a == 2){
                if (test){
                    if (v==1){
                        map.remove(b);
                    }else{
                        map.put(b,v-1);
                    }
                }
            }else if (a == 3){
                if (b > n){
                    mlist.add(0);
                }else {
                    if (map.containsValue(b)) {
                        mlist.add(1);
                    } else {
                        mlist.add(0);
                    }
                }
            }
        }
        for(int x:mlist){
            System.out.println(x);
        }
    }
}
