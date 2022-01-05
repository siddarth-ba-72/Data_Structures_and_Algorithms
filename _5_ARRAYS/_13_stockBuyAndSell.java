import java.util.Scanner;

public class _13_stockBuyAndSell {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Size of the Array : ");
        int n = sc.nextInt();
        int arr[] = new int[n];
        System.out.print("Insert Array Elements here:- ");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        sc.close();
        int k = stockBuyandSell(arr);
        System.out.printf("Maximum Profit = %d", k);
        // System.out.println(stockBuyandSellNaive(arr, 0, n - 1));
    }

    // Niave solution
    public static int stockBuyandSellNaive(int price[], int start, int end) {
        if (end <= start)
            return 0;
        int profit = 0;
        for (int i = start; i < end; i++) {
            for (int j = i + 1; j < end; j++) {
                if (price[j] > price[i]) {
                    int curr_prof = price[j] - price[i] + stockBuyandSellNaive(price, start, i - 1)
                            + stockBuyandSellNaive(price, j + 1, end);
                    profit = Math.max(profit, curr_prof);
                }
            }
        }
        return profit;
    }

    // Optimized solution
    public static int stockBuyandSell(int price[]) {
        int n = price.length;
        int profit = 0;
        for (int i = 1; i < n; i++) {
            if (price[i] > price[i - 1]) {
                profit += (price[i] - price[i - 1]);
            }
        }
        return profit;
    }

}
