#include <iostream>
#include <Windows.h>




using namespace std;
static bool debugger() {

	//NULL = nullptr
	if (FindWindow(nullptr, L"Cheat Engine 7.5")) {






		return true;

	}

	return false;



}



//auto main ()->int = int main()

int main() {

	if (debugger()) {



		cout << "Depurador detectado";
		return 0;
		//sale del programa si detecta depurador
	}
	else
	{
		cout << "No se detecto depurador";
		
	}
	//implementar mas logica si quereis 









}
