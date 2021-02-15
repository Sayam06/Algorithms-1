public class Algorithms{
    public static int main(String[] args){
        int arr[] = {1,2,3,4,5,6};
        int n = arr.length;

        for(int i=0;i<n;i++){
            int sum = 0;
            for(int j=i;j<n;j++){
                sum+=arr[j];
            }
            
        }
    }
}