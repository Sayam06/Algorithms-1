public class Algortihms{
    static int missing(int a[], int n) {
        int sum = 1;
        for (int i = 2; i <= (n + 1); i++)
        {
            total += i;
            total -= a[i - 2];
        }
        return total;
    }
    public static void main(String[] args)
    {
        int[] arr = { 1, 2, 4, 5 ,6};
        System.out.println(missing(arr, arr.length));
    }
}
 