import java.util.*;

public class JAVA
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        while(true)
        {
            int n = sc.nextInt();
            if(n == 0)
            {
                break;
            }
            int cnt = 0;
            while((n&1) == 1)
            {
                cnt++;
                n >>= 1;
            }
            System.out.println(cnt);
        }
    }
}
