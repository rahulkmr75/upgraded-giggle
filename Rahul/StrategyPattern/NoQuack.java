package strategy.pattern;

public class NoQuack implements IQuackBehaviour {
	public void quack() {
		System.out.println("**Silence**");
	}
}
