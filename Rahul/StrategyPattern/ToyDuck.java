package strategy.pattern;

public class ToyDuck extends Duck {
	public ToyDuck() {
		super(new NoFly() , new NoQuack());
	}
}
