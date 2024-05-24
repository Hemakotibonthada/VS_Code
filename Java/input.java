import java.util.Scanner;
public class input{
public static void main (String Args[]) {
   Scanner sc =new Scanner (System.in);
    System.out.println("Enter a Number:");
   int A=sc.nextInt();
   System.out.println("Enter Second Number:");
    int B=sc.nextInt();
  //  sc.close();
    int C=A+B;
    System.out.println("Sum Is:"+C);
}
}
