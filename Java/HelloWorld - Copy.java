import java.util.*;
public class HelloWorld
{
    public static void main(String args[])
    {   Scanner Hema = new Scanner(System.in);
        int A= Hema.nextInt();
        int B= Hema.nextInt();
        Hema.close();
        int C = A+B;
        System.out.println("Addition Is :" + C);

    }
}