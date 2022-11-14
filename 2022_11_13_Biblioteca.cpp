// 2022_11_13_Biblioteca.cpp
// Fernando Patiño
// programa para almacenamiento de nomres de libros, años  de publicacion y autores
//

#include <iostream>
#include <string>
#include <Windows.h>

int main()
{
	bool ciclo = false;
	int dec = 0; 
	int fecha[5]={0,0,0,0,0};
	std::string nombre[5];
	std::string autor[5];

	while (ciclo == false)
	{
	std::cout << "=========================================" << std::endl;
	std::cout << "|| SELECCIONA QUE ACCION QUIERES HACER ||" << std::endl;
	std::cout << "||      0) INGRESA DATOS DE LIBROS     ||" << std::endl;
	std::cout << "||      1) REVISA DATOS DE LIBROS      ||" << std::endl;
	std::cout << "||       2) SALIR DE EL PROGRAMA       ||" << std::endl;
	std::cout << "=========================================" << std::endl;
	std::cin >> dec;
	system("CLS");




		if (dec == 0)
		{
			for (int i = 0; i < 3; i++)
			{

				std::cout << "ingresa la fecha de publicacion del libro " << i + 1 << ":" << std::endl;
				std::cin >> fecha[i];
				std::cin.ignore();
				std::cout << "ingresa el titulo del libro " << i + 1 << ":" << std::endl;
				getline(std::cin, nombre[i]);
				std::cout << "ingresa el nombre del autor del libro " << i + 1 << ":" << std::endl;
				getline(std::cin, autor[i]);

			}
		}
		else if (dec == 1) {
			if (fecha[0] == 0)
			{
				std::cout << "tu no haz ingresado ningun dato " << std::endl;
			}
			else {
				for (int i = 0; i < 3; i++)
				{
					std::cout << "titulo del libro " << i + 1 << " es :" << nombre[i] << std::endl;
					std::cout << "el año de publicacion del libro " << i + 1 << " es :" << fecha[i] << std::endl;
					std::cout << "titulo del libro " << i + 1 << " es :\n" << autor[i] << std::endl;
				}
			}
		}
		else {
			if (dec == 2) {
				ciclo = true;
			}
		}
	}
		
		
}

