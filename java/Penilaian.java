package java;

import java.util.Scanner;

public class Penilaian {
    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)) {
            System.out.print("Masukkan nilai: ");
            int nilai = input.nextInt();

            if (nilai >= 75) {
                System.out.println("Lulus");
            } else {
                System.out.println("Belum lulus");
            }
        }
    }
}