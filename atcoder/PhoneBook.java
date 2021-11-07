package lakscode.problemsolving.atcoder;

import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class PhoneBook {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        Map<String,Integer> mymap = new HashMap<>();
        for(int i=0;i<n;i++){
            String name = sc.nextLine();
            int phone = sc.nextInt();
            mymap.put(name,phone);
            sc.nextLine();
        }
        while (sc.hasNext()){
            String x =sc.nextLine();
            if (mymap.containsKey(x)){
                System.out.println(x+"="+mymap.get(x));
            }else{
                System.out.println("Not found");
            }
        }
    }
}
