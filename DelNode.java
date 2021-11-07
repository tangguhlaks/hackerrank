package lakscode.problemsolving;

import java.util.LinkedList;
import java.util.List;
import java.util.Scanner;

public class DelNode {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
        List<Integer> list = new LinkedList<>();
        for (int i=0;i<n;i++){
            list.add(i,sc.nextInt());
        }
        int p = sc.nextInt();
        list.remove(p);
        for (int r : list){
            System.out.print(r+" ");
        }
    }
}
