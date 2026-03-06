//https://codeforces.com/problemset/problem/9/A
import java.util.Scanner;

public class NewFile {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int y = sc.nextInt();
        int w = sc.nextInt();

        int max = Math.max(y, w);
        int favorable = 6 - max + 1;

        int gcd = gcd(favorable, 6);

        System.out.println((favorable / gcd) + "/" + (6 / gcd));
    }

    // Helper function to compute GCD
    private static int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }
}
