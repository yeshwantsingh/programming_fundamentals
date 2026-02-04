#include <stdio.h>

// Global variable (storage class: extern by default)
int globalCounter = 0;

void changeStaticVariable()
{
	static int counter = 0;
	counter++;
	printf("The value of counter is: %d\n", counter);

}

int main() {
    printf("--- Storage Classes and Scope ---\n");
    
    // Auto (local)
    auto int autoVar = 10;
    printf("Auto variable: %d\n", autoVar);
    
    // Static
    static int staticVar = 0;
    staticVar++;
    printf("Static variable: %d\n", staticVar);
    
    // Global
    globalCounter++;
    printf("Global variable: %d\n", globalCounter);
    
    // Scope demonstration
    {
        int blockVar = 20;
        printf("Block scope variable: %d\n", blockVar);
    }
    // blockVar is out of scope here
		//
		
		changeStaticVariable();
		changeStaticVariable();
    
    return 0;
}
