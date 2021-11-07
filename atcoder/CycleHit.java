package lakscode.problemsolving.atcoder;
import java.util.ArrayList;
import java.util.Scanner;

public class CycleHit {

    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        ArrayList<String> mList = new ArrayList<>();
        mList.add(sc.next());
        mList.add(sc.next());
        mList.add(sc.next());
        mList.add(sc.next());
        int hr=0;
        int h=0;
        int a3b=0;
        int a2b=0;
        for (String x:mList){
            if (x.equals("3B")){
                a3b++;
            }else if (x.equals("2B")){
                a2b++;
            }else if (x.equals("H")){
                h++;
            }else if (x.equals("HR")){
                hr++;
            }
        }
        if (h == 1 && hr == 1 && a2b == 1&& a3b==1){
            System.out.println("YES");
        }else {
            System.out.println("NO");
        }
    }
}
