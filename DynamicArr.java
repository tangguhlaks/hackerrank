package lakscode.problemsolving;

import java.util.ArrayList;
import java.util.Scanner;

public class DynamicArr {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<ArrayList<Integer>> arrList = new ArrayList<>(n);
        for (int i=0;i<n;i++){
            arrList.add(new ArrayList<Integer>());
        }
        int q = sc.nextInt();
        int lastans = 0;
        for (int i=0;i<q;i++){
            if (sc.nextInt() == 1){
                arrList.get((sc.nextInt() ^ lastans)%n).add(sc.nextInt());
            }else {
                ArrayList<Integer> arr = arrList.get((sc.nextInt() ^ lastans)%n);
                lastans= arr.get(sc.nextInt() % arr.size());
                System.out.println(lastans);
            }
        }

    }
}
