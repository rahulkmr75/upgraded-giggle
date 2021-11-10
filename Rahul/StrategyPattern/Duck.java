package strategy.pattern;

public class Duck {
	IFlyBehaviour flyBehaviour;
	IQuackBehaviour quackBehaviour;
	
	public Duck(IFlyBehaviour flyBehaviour,
			IQuackBehaviour quackBehaviour) {
		this.flyBehaviour = flyBehaviour;
		this.quackBehaviour = quackBehaviour;
	}
	public void setFlyBehaviour(IFlyBehaviour flyBehaviour) {
		this.flyBehaviour = flyBehaviour;
	}
	
	public void setQuackBehaviour(IQuackBehaviour quackBehaviour) {
		this.quackBehaviour = quackBehaviour;
	}
	
	public void fly() {
		this.flyBehaviour.fly();
	}
	public void quack() {
		this.quackBehaviour.quack();
	}
	
	public void swim() {
		System.out.println("Swimming");
	}
}
