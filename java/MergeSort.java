public class Algorithms {
	static void merge(int arr[], int l, int m, int r) {
		int n1 = m - l + 1;
		int n2 = r - m;

		int a1[] = new int[n1];
		int a2[] = new int[n2];

		for (int i = 0; i < n1; ++i)
			a1[i] = arr[l + i];
		for (int j = 0; j < n2; ++j)
			a2[j] = arr[m + 1 + j];

		int i = 0, j = 0;

		int k = l;
		while (i < n1 && j < n2) {
			if (a1[i] <= a2[j]) {
				arr[k] = a1[i];
				i++;
			}
			else {
				arr[k] = a2[j];
				j++;
			}
			k++;
		}

		while (i < n1) {
			arr[k] = a1[i];
			i++;
			k++;
		}

		while (j < n2) {
			arr[k] = a2[j];
			j++;
			k++;
		}
	}

	static void sort(int arr[], int l, int r) {
		if (l < r) {
			int mid =l+ (r-l)/2;

			sort(arr, l, mid);
			sort(arr, mid + 1, r);

			merge(arr, l, mid, r);
		}
	}


	public static void main(String args[]) {
		int arr[] = {12,10,2001,1,5,7,2002,22 };

        sort(arr, 0, arr.length - 1);
        
        for(int i=0;i<arr.length;i++)
            System.out.println(arr[i]);

	}
}
