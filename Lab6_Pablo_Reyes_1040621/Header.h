#pragma once
using namespace std;
#include <string>
#include <cstring>

static class Lista
{
public:

	struct Nodo
	{
		int generacion;
		int nationalNumber;
		string nombre;

		Nodo* next;
	};

private:

	Nodo* Header = NULL;
	Nodo* Fin = NULL;

public:

	Nodo* GetHeader()
	{
		return Header;
	}

	Nodo* GetFin()
	{
		return Fin;
	}

	void AddList(int generacion, int nationalNum, string NombrePok);

	void Clear();
	int ListCount();


	Nodo* PivoteNT(Nodo* inicio, Nodo* fin);
	void QuickSortNT(Nodo* inicio, Nodo* fin);

	Nodo* PivoteGen(Nodo* inicio, Nodo* fin);
	void QuickSortGen(Nodo* inicio, Nodo* fin);

	Nodo* NodoEnPosicion(int index);
	void ShellSortNT();
	void ShellSortGen();

	Nodo* NodoAnterior(Nodo* Node);
	void InsertionSortNT();
	void InsertionSortGen();

	void SelectionSortNT();
	void SelectionSortGen();


}Lista_Pokemones;