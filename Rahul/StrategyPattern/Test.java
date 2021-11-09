package strategy.pattern;

public class Test {

	public static void main(String[] args) {
		Duck mallardDuck = new MallardDuck();
		mallardDuck.quack();
		mallardDuck.fly();
		
		Duck toyDuck = new ToyDuck();
		toyDuck.fly();
		toyDuck.quack();
		
	}

}
