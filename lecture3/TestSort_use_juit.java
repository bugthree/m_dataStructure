//import org.junit.Test;
//import static org.junit.Assert.*;

public class TestSort_use_juit {
	//@Test
	public static void testSort(){
		String[] input = {"i", "have", "an", "egg"};
		String[] expected = {"an", "egg", "have", "i"};

		Sort.sort(input);

		//org.junit.Assert.assertArrayEquals(expected,input);// 使用junit 进行单元测试
	}

	// 测试 Sort.findSmallest method
	//@Test
	public static void testFindSmallest(){
		String[] input = {"i", "have", "an", "egg"};
		int expected = 2;

		int actual = Sort.findSmallest(input,0);

		//org.junit.Assert.assertEquals(expected,actual);// 使用junit 进行单元测试
	}

	// 测试 Sort.findSmallest method
	//@Test
	public static void testSwap(){
		String[] input = {"i", "have", "an", "egg"};
		String[] expected = {"an", "have", "i", "egg"};

		Sort.swap(input,0,2);

		//org.junit.Assert.assertArrayEquals(expected,input);// 使用junit 进行单元测试
	}
	public static void main(String[] args){
		//testSort();
		//testFindSmallest();
		//testSwap();
	}
}