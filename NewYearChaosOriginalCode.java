package lakscode.problemsolving;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.List;
import java.util.stream.IntStream;
import java.util.stream.Stream;

import static java.util.stream.Collectors.toList;

public class NewYearChaosOriginalCode {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        int t = Integer.parseInt(bufferedReader.readLine().trim());

        IntStream.range(0, t).forEach(tItr -> {
            try {
                int n = Integer.parseInt(bufferedReader.readLine().trim());

                List<Integer> q = Stream.of(bufferedReader.readLine().replaceAll("\\s+$", "").split(" "))
                        .map(Integer::parseInt)
                        .collect(toList());

                Result.minimumBribes(q);
            } catch (IOException ex) {
                throw new RuntimeException(ex);
            }
        });

        bufferedReader.close();
    }

    private static class Result {
        public static void minimumBribes(List<Integer> arr) {
            int count=0;
            for (int i=arr.size()-1;i>=0;i--){
                if (arr.get(i) != i+1){
                    if ((i-1) >= 0 && arr.get(i-1) == i+1){
                        arr.set(i-1,arr.get(i));
                        arr.set(i,arr.get(i-1));
                        count++;
                    }else if ((i-2)>= 0 && arr.get(i-2) == i+1){
                        arr.set(i-2,arr.get(i-1));
                        arr.set(i-1,arr.get(i));
                        arr.set(i,arr.get(i-2));
                        count+=2;
                    }else {
                        System.out.println("Too chaotic");
                        return;
                    }
                }
            }
            System.out.println(count);
        }
    }
}
