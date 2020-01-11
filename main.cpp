#include <future>
#include <iostream>
#include <thread>
#include <pthread.h>
#include <string>

#include <unistd.h>


void boilWater(){
	std::cout << "boid water" << std::endl;
	sleep(1);
	std::cout << "water are boiled" << std::endl;
}

void makeTea(){
	std::cout << "Make tea" << std::endl;
	sleep(1);
	std::cout << "Tea maked" << std::endl;
}

void doSomething(){
	std::cout << "Make some" << std::endl;
	sleep(4);
	std::cout << "Make some prepared" << std::endl;
}

int main(int argc, char* argv[]){
	std::future<std::string> tea =
		std::async(std::launch::async, []{
			std::cout << "Lets build tea" << std::endl;
			boilWater();
			makeTea();
			return std::string("Tea are build");
		});
	doSomething();
	std::cout << tea.get() << std::endl;
	return 0;
}
