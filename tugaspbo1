import java.util.Scanner;
public class App {
    public static void main(String[] args) throws Exception {
        Scanner input = new Scanner(System.in);
        String nama;
        int umur;
        
        System.out.println("Cek umur anda untuk mengikuti ujian SIM");
        System.out.print("Masukkan Nama \t: " );
        nama = input.nextLine();
        System.out.print("Masukkan Umur \t: " );
        umur = input.nextInt();
        if(umur >= 17) {
            System.out.print("Selamat anda dapat mengikuti ujian SIM\n" );
        } else {
            System.out.print("Maaf anda belum berusia 17 tahun\n" );
        }
        System.out.print("\n" );
        int i = 0;
        while (i < 2) {
            System.out.print("Perulangan while\n" );
            i++;
        }
        System.out.print("\n" );

        int j = 0;
        do {
            System.out.print("Perulangan Do while\n" );
            j++;
        } while (j < 2);
        System.out.print("\n" );

        char y[]= {'h', 'a', 'i', 'd', 'a', 'r'};
        System.out.println("ARRAY 1D\n");
        for(int k=0; k<6; k++) {       //perulangan For & array 1D
            System.out.println("Index ke" + k + " = " + y[k]);
        }

        int x[][] = {{04,05}, {20,03}, {07,06}};
        System.out.println("ARRAY 2D\n");
        for(int e=0; e<3; e++) {
            for(int d=0; d<2; d++) {
                System.out.print(x[e][d] + "\t");
            }
            System.out.println();
        }
    }
}
