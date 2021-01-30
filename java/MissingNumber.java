public class Algorithms{
    static int missing(int a[], int n) {
        int sum = 1;
        for (int i = 2;i <= (n + 1);i++)
        {
            sum += i;
            sum -= a[i - 2];
        }
        return sum;
    }
    public static void main(String[] args)
    {
        int[] arr = { 1, 2, 4, 5 ,6};
        System.out.println(missing(arr, arr.length));
    }
}
 