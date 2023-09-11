import java.util.Scanner;

public class crossover {
    public static void main(String[] args) {
        final int LENGTH = 10;
        String parentstr1;
        String parentstr2;
        Scanner sc = new Scanner(System.in);

        System.out.println("Parent1: ");
        parentstr1 = sc.next();
        System.out.println("Parent2: ");
        parentstr2 = sc.next();

        char[] parent1 = parentstr1.substring(0,LENGTH).toCharArray();
        char[] parent2 = parentstr2.substring(0,LENGTH).toCharArray();

        int point;
        System.out.println("Cut point: before index ");
        point = sc.nextInt();

        char[] child1 = new char[LENGTH];
        char[] child2 = new char[LENGTH];

        for(int i = 0 ; i < LENGTH; i++){
            if(i < point){
                child1[i] = parent1[i];
                child2[i] = parent2[i];
            } else{
                child1[i] = parent2[i];
                child2[i] = parent1[i];
            }
        }

        System.out.println("Offspring1: " + String.valueOf(child1));
        System.out.println("Offspring2: " + String.valueOf(child2));
    }
}
