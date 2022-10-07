public class TestSort {
	public static void testSort(){
		String[] input = {"i", "have", "an", "egg"};
		String[] expected = {"an", "egg", "have", "i"};

		Sort.sort(input);

		for(int i =0;i<input.length;i+=1){
			if(!input[i].equals(expected[i])){
				System.out.println("Mismatch in position" + i + ",expected:" + expected[i] + ", but git: " + input[i]);
				return;
			}
		}
	}

	public static void main(String[] args){
		testSort();
	}
}