import java.util.Scanner;

public class Next_Line {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter Integer");
        int a = scan.nextInt();
        System.out.print("Enter double value");
        double b = scan.nextDouble();
        scan.nextLine();
        System.out.print("Enter String value");
        String c = scan.nextLine(); //after entering double value we will press enter and if there is no empty scanner it will skip the string scanner in this line

        System.out.println(c);
        System.out.println(b);
        System.out.println(a);

    }

}
