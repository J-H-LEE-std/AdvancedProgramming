import java.util.Arrays;
import java.util.Scanner;
import java.util.stream.Stream;

public class locus{
    public static void main(String[] args){
        final int LENGTH = 10;
        String order_s;
        Scanner sc = new Scanner(System.in);

        System.out.print("Order-based: ");
        order_s = sc.next();

        int[] order = Stream.of(order_s.split("")).mapToInt(Integer::parseInt).toArray();
        int[] locus = new int[order.length];

        for (int i = 0; i < LENGTH; i++){
            try{
                locus[order[i]] = order[i + 1];
            }catch(IndexOutOfBoundsException e){
                locus[order[i]] = order[0];
            }
        }

        System.out.println("Locus-based: " + Arrays.toString(locus).replaceAll("[^0-9]",""));
    }
}
