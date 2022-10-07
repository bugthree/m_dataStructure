public class Sort {
	public static void sort(String[] array){
		// 使用选择排序对数组进行排序
		// first, 找到该数组最小值
		// second, 将该最小值交换到首位
		// 重复上述两步骤，继续，直到最后的数组大小只有

		sort(array,0);
	}

	// brief：返回数组(这里是字典)的最小值
	// return smallest x
	public static int findSmallest(String[] x, int start){
		int smallestIndex = start;
		for(int i = start;i < x.length; i += 1){
			int cmp = x[i].compareTo(x[smallestIndex]);
			// if(x[i] < x[smallestIndex]),cmp will be -1
			if(cmp < 0){
				smallestIndex = i;
			}
		}
		return smallestIndex;
	}

	// swap
	public static void swap(String[] x, int a, int b){
		String temp = x[a];
		x[a] = x[b];
		x[b] = temp;
	}

	private static void sort(String[] x, int start){
		if(start == x.length){
			return;
		}
		int smallestIndex = findSmallest(x,start);
		swap(x, start, smallestIndex);
		sort(x, start + 1);
	}
}