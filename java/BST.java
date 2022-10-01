package DSAFull.BinaryTrees;

class BinarySearchTree {
      Node root;
      BinarySearchTree(){
            root = null;
      }

      boolean isEmpty(){
            return root == null;
      }

      boolean search(Node r,int x){
            if(r == null) return false;
            if(r.data == x) return true;
            else if(x < r.data) return search(r.left,x);
            else return search(r.right,x);
      }

      void insert(int x){
            root = insertHelper(root,x);
      }

      Node insertHelper(Node r,int x){
            if(r == null) {
                  r = new Node(x);
                  return r;
            }
            if(x < r.data) r.left = insertHelper(r.left,x);
            else r.right = insertHelper(r.right,x);
            return r;
      }

      void createFromArray(int[] a){
            for(int i=0;i<a.length;i++) insert(a[i]);
      }

      void preorder(Node r){
            if(r == null) return;
            System.out.print(r.data+" ");
            preorder(r.left);
            preorder(r.right);
      }

      void inorder(Node r){
            if(r == null) return;
            inorder(r.left);
            System.out.print(r.data+" ");
            inorder(r.right);
      }

      void postorder(Node r){
            if(r == null) return;
            postorder(r.left);
            postorder(r.right);
            System.out.print(r.data+" ");
      }

      class Node{
            int data;
            Node left;
            Node right;
            Node(int d){
                  data = d;
                  left = right = null;
            }
      }
}
