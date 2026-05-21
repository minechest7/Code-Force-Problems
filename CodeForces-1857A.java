//https://codeforces.com/contest/1857/problem/A
import java.util.Scanner;

public class Main
{
    public static void main (String[]args)
    {
        Scanner sc = new Scanner(System.in);

        int test;//the number of test cases
        test = sc.nextInt();

        for(int t=0;t<test;t++)
        {
            int n;//the size of the array
            int sum =0;
            n=sc.nextInt();

            int[] arr = new int[n];

            for(int i=0;i<n;i++)
            {
                arr[i] = sc.nextInt();
                sum = sum+arr[i];
            }

            if(sum%2==0)  
            {
                System.out.println("Yes");
            }
            else
            {
                System.out.println("No");
            }
        }
    }
}
