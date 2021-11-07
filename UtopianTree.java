package lakscode.problemsolving;

import java.util.Scanner;

public class UtopianTree {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i=0;i<n;i++){
            int periode = sc.nextInt();
            int treeheight = 1;
                for (int j =0;j<periode;j++){
                    if(j%2==0){
                        treeheight = treeheight*2;
                    }else {
                        treeheight += 1;
                    }
                }
            System.out.println(treeheight);
        }
    }
}
