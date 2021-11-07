package lakscode.problemsolving;

import java.util.*;

public class CountTriplet {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int r = sc.nextInt();
//        Long[] arr = new Long[n];
        List<Long> arr = new ArrayList<>();
        for (int i=0;i<n;i++){
            arr.add(i,sc.nextLong());
        }

        Map<Long,Long> potential = new HashMap<>();
        Map<Long,Long> counter = new HashMap<>();
        long count =0;
        for (int i=0;i<n;i++){
            long a = arr.get(i);
            long key = a/r;
            potential.put(a,potential.getOrDefault(a,0L)+1);
            if (potential.containsKey(key) && a%r ==0){
                long c = potential.get(key);
                counter.put(a,counter.getOrDefault(a,0L)+c);
            }
            if (counter.containsKey(key) && a%r == 0){
                count += counter.get(key);
            }
        }
        System.out.println(count);
    }
}
