package DSAFull.BinaryTrees;

import java.util.Scanner;

public class WorkingOfBST {
      public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            BinarySearchTree bst = new BinarySearchTree();
//            int x=-1;
//            while(true){
//                  x  = sc.nextInt();
//                  if(x == -1) break;
//                  bst.insert(x);
//            }
            bst.createFromArray(new int[]{8,3,1,6,4,7,10,14});
            BinarySearchTree.Node rootNode = bst.root;
            bst.preorder(rootNode);
            System.out.println();

            bst.inorder(rootNode);
            System.out.println();

            bst.postorder(rootNode);
            System.out.println();

            System.out.println(bst.search(rootNode,10));
      }
}
