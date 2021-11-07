package lakscode.problemsolving.codechef;

import java.util.Scanner;

public class DigitRem {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int z=0;z<t;z++){
            int n = sc.nextInt();
            int d = sc.nextInt();
            if (n == d){
                System.out.println("1");
            }else{
                char[] arr = (""+n).toCharArray();
                char[] arr2 = (""+d).toCharArray();
                int c=0;
                boolean flag=true;
                for (int i=0;i< arr.length;i++){
                    if (arr[i] == arr2[0]){
                        c = i;
                        flag = false;
                        break;
                    }
                }
                if (flag == true){
                    System.out.println("0");
                }else{
                    String mys;
                    if (d == 9 && c > 0){
                        int temp = Character.getNumericValue(arr[c-1])+1;
                        arr[c-1] = (char) (temp+'0');
                        mys = String.valueOf(arr[c-1]);
                        for (int i=c;i< arr.length;i++){
                            mys = mys+"0";
                        }
                    }else if (d == 9 && c == 0){
                        mys = "1";
                        for (int i=c;i< arr.length;i++){
                            mys = mys+"0";
                        }
                    }else if (d == 0){
                        mys = "1";
                        for (int i=c;i< arr.length;i++){
                            mys = mys+"1";
                        }
                    }else {
                        int temp = Character.getNumericValue(arr[c])+1;
                        arr[c] = (char) (temp+'0');
                        mys = "";
                        for (int i=0;i<c;i++){
                            mys = mys+String.valueOf(arr[i]);
                        }
                        mys = mys+String.valueOf(arr[c]);
                        for (int i=c+1;i< arr.length;i++){
                            mys = mys+"0";
                        }
                    }
                    int ans = Integer.parseInt(mys);
                    System.out.println(ans-n);
                }
            }
        }
    }
}
