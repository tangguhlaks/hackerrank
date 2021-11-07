package lakscode.problemsolving;

import java.util.ArrayList;
import java.util.Scanner;

public class LargestArea {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int w = sc.nextInt();
        int h = sc.nextInt();
        int n1 = sc.nextInt();
        int[] isv = new int[n1];
        for (int i = 0; i < n1; i++) {
            isv[i] = sc.nextInt();
        }
        int n2 = sc.nextInt();
        int[] dis = new int[n2];
        for (int i = 0; i < n1; i++) {
            dis[i] = sc.nextInt();
        }
        ArrayList<Integer> mList = new ArrayList();
        for (int i=0;i<n1;i++){
            int a= 0;
            int b=0;
            int c=0;
            if (isv[i] == 0){
                a= 1;
                int t = Math.max(a*w,(h-1)*w);
                mList.add(t);
            }else {
                int t = (h-dis[i])*(w-dis[i]);
                mList.add(t);
            }
        }
        for (int x:mList){
            System.out.println(x);
        }
    }
}
