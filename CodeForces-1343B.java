//https://codeforces.com/problemset/problem/1343/B
import java.util.Scanner;

public class Student
{

    static void printNumber(int n)
    {
        for(int i =1;i<=n;i++)
        {
            if(i%2==0)
            {
                System.out.printf("%d ",i);
            }
        }
        for(int i=1;i<=n;i++)
        {
            if(i%2==1 && i!=(n-1))
            {
                System.out.printf("%d ",i);
            }
            if(i==(n-1))
            {
                System.out.printf("%d ",i+(n/2));
            }
        }
    }
    public static void main(String[]args)
    {
        Scanner sc = new Scanner(System.in);

        int test = sc.nextInt();//number of test cases

        for(int t=0; t<test;t++)
        {
            int n = sc.nextInt();//length of the aray
            if((n/2)%2==1)
            {
                System.out.printf("NO\n");
            }
            else
            {
                System.out.printf("YES\n");
                printNumber(n);
                System.out.println();
            }

        }
    }
}
