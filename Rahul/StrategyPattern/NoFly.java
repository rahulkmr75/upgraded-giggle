package strategy.pattern;

public class NoFly implements IFlyBehaviour {
	public void fly() {
		System.out.println("**Stay still**");
	}
}
