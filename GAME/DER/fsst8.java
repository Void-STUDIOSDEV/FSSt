import java.util.Scanner;

public class fsst8 {
	public static void main(String[] args) throws InterruptedException {
		Scanner Input = new Scanner(System.in);
		
		System.out.println("Fire: Short Story 8");
		Thread.sleep(1000);
		System.out.println("This is an interactive test program for JAVA");
		Thread.sleep(1000);
		System.out.println("I AM COMPLETELY NEW TO JAVA");
		Thread.sleep(1000);
		System.out.println("Copyright under the MIT License\n");
		Thread.sleep(1000);
		System.out.println("You wake up from a nap in the tent. It is night, owls are hooting, the birds are asleep... You smell smoke, you see a fire!");
		Thread.sleep(1000);
		System.out.println("1. Grab bottles of water and pour them into a bucket and throw it onto the fire | 2. Watch it burn everything");
		System.out.printf("CHOICE: ");
		int a = Input.nextInt();
		
		if (a == 1) {
			Thread.sleep(1000);
			System.out.println("\nYou attempt to grab a bunch of water bottles, the fire ingulfs you...\n");
		}
		else if (a == 2) {
			Thread.sleep(1000);
			System.out.println("\nYou watch the fire ingulf everything... You notice a figure watching.\n");
		}
		else {
			System.out.println("\nINVALID.\n");
		}
	}
}
