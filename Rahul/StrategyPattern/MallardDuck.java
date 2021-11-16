package strategy.pattern;

public class MallardDuck extends Duck {

	public MallardDuck() {
		super(new SimpleFly() , new SimpleQuack());
	}

}
