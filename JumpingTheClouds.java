package lakscode.problemsolving;

import java.util.Scanner;

public class JumpingTheClouds {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n=scanner.nextInt();
        int[] cloud = new int[n];
        for (int i=0;i<n;i++){
            cloud[i]= scanner.nextInt();
        }
        int jumps=0;
        for (int i=0;i<n-1;i++){
            if (cloud[i]==0) {
                i++;
            }
            jumps++;
        }
        System.out.println(jumps);

    }
}
