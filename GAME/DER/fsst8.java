import java.util.Scanner;

public class fsst8 {
	public static void main(String[] args) throws InterruptedException {
		Scanner Input = new Scanner(System.in);
		
		System.out.printf("Fire: Short Story 8\n");
		Thread.sleep(1000);
		System.out.printf("This is an interactive test program for JAVA\n");
		Thread.sleep(1000);
		System.out.printf("I AM COMPLETELY NEW TO JAVA\n");
		Thread.sleep(1000);
		System.out.printf("Copyright under the MIT License\n\n");
		Thread.sleep(1000);
		System.out.printf("You wake up from a nap in the tent. It is night, owls are hooting, the birds are asleep... You smell smoke, you see a fire!\n");
		Thread.sleep(1000);
		System.out.printf("1. Grab bottles of water and pour them into a bucket and throw it onto the fire | 2. Watch it burn everything\n");
		System.out.printf("CHOICE: ");
		int a = Input.nextInt();
		
		if (a == 1) {
			Thread.sleep(1000);
			System.out.printf("\nYou attempt to grab a bunch of water bottles, the fire ingulfs you...\n");
		}
		else if (a == 2) {
			Thread.sleep(1000);
			System.out.printf("\nYou watch the fire ingulf everything... You notice a figure watching.\n");
		}
		else {
			System.out.printf("\nINVALID.\n\n");
		}
	}
}
