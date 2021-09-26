import java.util.Arrays;

public class SortedMatrix {
    public static void main(String[] args) { 
          int[][] a = {{10,25,28},
                      {30,34},
                      {40,50,53,59,90}
                     }; 
          System.out.println(Arrays.toString(BSinMatrix(a, a[i][j])));              
      }
  
      static int[] BSinMatrix(int[][] a,int x) {
           if(a.length == 0) return new int[] {-1,-1};

           int rows = a.length;
           int cols = a[0].length;		 


           for(int i=0;i<rows;i++) {
             cols=a[i].length;
             if(a[i][cols-1] >= x && x >= a[i][0]) {

               int start=0,end=cols-1;

               while(start <= end) {
                 int mid=start+(end-start)/2;
                 
                 if(a[i][mid] == x) return new int[] {i,mid};
                 else if(a[i][mid] < x) start=mid+1;
                 else end=mid-1;
               }
             }
           } 
           return new int[] {-1,-1};
      }
}
