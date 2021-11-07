package lakscode.problemsolving;

import java.util.*;

public class SalesByMatch {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] sock = new int[n];
        for (int i=0;i<n;i++){
            sock[i] = scanner.nextInt();
        }

        Set arrayList = new HashSet();

        int result =0;
        for (int i =0;i<n;i++){
            if(!arrayList.contains(sock[i])){
                arrayList.add(sock[i]);
            }else {
                result++;
                arrayList.remove(sock[i]);
            }
        }
        System.out.println(result);
    }
}
