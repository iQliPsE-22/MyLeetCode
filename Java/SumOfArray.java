import java.util.Scanner;

public class SumOfArray {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int[] arr = new int[10];
        for(int i = 0;i<10;i++){
            arr[i]= scanner.nextInt();
        }
        int sum = 0 ;
        for(int i:arr){
            sum  = sum + i;
        }
        System.out.println(sum);
        scanner.close();
    }
}
