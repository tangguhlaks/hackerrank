package lakscode.problemsolving;

import java.util.Arrays;
import java.util.Comparator;
import java.util.Scanner;

public class ComparatorSort {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n= sc.nextInt();
        Player[] players = new Player[n];
        Cekk cekk = new Cekk();
        for (int i=0;i<n;i++){
            players[i] = new Player(sc.next(),sc.nextInt());
        }
        Arrays.sort(players,cekk);
        for (int i=0;i<n;i++){
            System.out.println(players[i].nama+" "+players[i].score);
        }

    }
    public static class Player{
        String nama;
        Integer score;

        public Player(String nama, Integer score) {
            this.nama = nama;
            this.score = score;
        }
    }
    public static class Cekk implements Comparator<Player>{

        @Override
        public int compare(Player p1, Player p2) {
            if (p1.score>p2.score) return -1;
            if (p1.score<p2.score) return 1;
            return p1.nama.compareTo(p2.nama);
        }
    }
}
