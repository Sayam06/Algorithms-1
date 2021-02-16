public class Algorithms{
    public static int main(){
        int arr[] = {1,2,3,4,1,10,22,2002,12,2001}; 
        int n = arr.length;

        int min = Integer.MIN_VALUE;
        for(int i=0;i<n;i++){
            if(min < arr[i]){
                min=arr[i];
                System.out.print(min);
            }else{
                System.out.print(min);
            }
            System.out.print(" ");
        }
    }
}