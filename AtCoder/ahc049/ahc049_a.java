import java.util.Scanner;

public class ahc049_a {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();

        int[][] w = new int[N][N];
        int[][] d = new int[N][N];

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                w[i][j] = scanner.nextInt();
            }
        }

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                d[i][j] = scanner.nextInt();
            }
        }

        scanner.close();

        int x = 0, y = 0;
        StringBuilder moves = new StringBuilder();

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (i == 0 && j == 0) {
                    continue;
                }

                while (x < i) {
                    moves.append('D');
                    x++;
                }
                while (x > i) {
                    moves.append('U');
                    x--;
                }
                while (y < j) {
                    moves.append('R');
                    y++;
                }
                while (y > j) {
                    moves.append('L');
                    y--;
                }

                moves.append('1');

                while (x > 0) {
                    moves.append('U');
                    x--;
                }
                while (y > 0) {
                    moves.append('L');
                    y--;
                }
            }
        }
        for (int i = 0; i < moves.length(); i++) {
            System.out.println(moves.charAt(i));
        }
    }
}
