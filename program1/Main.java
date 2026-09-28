package program1;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)) {
            System.out.println("PROGRAM PENILAIAN SISWA");
            System.out.print("Masukkan nilai (0-100): ");

            if (!input.hasNextInt()) {
                System.out.println("Input tidak valid. Masukkan angka bulat.");
                return;
            }

            int nilai = input.nextInt();
            if (nilai < 0 || nilai > 100) {
                System.out.println("Nilai harus berada di antara 0 dan 100.");
                return;
            }

            String predikat;
            if (nilai >= 90) {
                predikat = "A";
            } else if (nilai >= 80) {
                predikat = "B";
            } else if (nilai >= 75) {
                predikat = "C";
            } else if (nilai >= 60) {
                predikat = "D";
            } else {
                predikat = "E";
            }

            String status = nilai >= 75 ? "Lulus" : "Belum lulus";
            System.out.println("\nHASIL PENILAIAN");
            System.out.printf("Nilai: %d/100%n", nilai);
            System.out.println("Predikat: " + predikat);
            System.out.println("Status: " + status);
        }
    }
}