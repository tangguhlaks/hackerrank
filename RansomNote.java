package lakscode.problemsolving;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

public class RansomNote {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int m = sc.nextInt();
        int n = sc.nextInt();
        String[] magazine = new String[m];
        String[] note = new String[n];
        for (int i=0;i<m;i++){
            magazine[i]=sc.next();
        }
        for (int i=0;i<n;i++){
            note[i] = sc.next();
        }

        Arrays.sort(magazine);
        List maga = new ArrayList(Arrays.asList(magazine));
        Arrays.sort(note);
        for(String r: note){
            if (!maga.remove(r)){
                System.out.println("No");
                return;
            }
        }
            System.out.println("Yes");

    }


}
