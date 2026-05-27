//https://codeforces.com/problemset/problem/1873/D
import java.util.*;

public class Main
{
    public static void main(String[]args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();

        for(int t=0;t<test;t++)
        {
            int n,k,count = 0;
     
            n=sc.nextInt();
            k=sc.nextInt();
            sc.nextLine();

            String s =sc.nextLine();

            for(int i=0;i<s.length();i++)
            {
                if(s.charAt(i)=='B')
                {
                    count++;
                    i = i +(k-1);
                }
            }
            System.out.println(count);
        }
    }
}
