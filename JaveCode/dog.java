/*
这是多行注释
*/

public class dog {
	public int weightInPounds;

	public dog(int w){// 构造
		weightInPounds = w;
	}

	public void makeNoise(){
		if(weightInPounds < 10){
			System.out.println("yip!");
		}else if(weightInPounds < 30){
			System.out.println("Bark.");
		}else{
			System.out.println("wof!");
		}
		


	}

}