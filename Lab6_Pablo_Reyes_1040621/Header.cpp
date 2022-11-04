#include "Header.h"

void Lista::AddList(int generacion, int nationalNum, string NombrePok)
{
	Nodo* new_nodo = new Nodo();
	new_nodo->generacion = generacion;
	new_nodo->nationalNumber = nationalNum;
	new_nodo->nombre = NombrePok;

	if (Header == NULL)
		Header = new_nodo;
	else
		Fin->next = new_nodo;

	Fin = new_nodo;

}

void Lista::Clear()
{

	while (Header != NULL)
	{
		Nodo* actual;
		actual = Header;

		Header = actual->next;
		delete actual;
	}

	Fin = NULL;

}

int Lista::ListCount()
{
	Nodo* actual = Header;
	int contar = 0;

	while (actual != NULL)
	{
		contar++;
		actual = actual->next;
	}

	return contar;
}

Lista::Nodo* Lista::PivoteNT(Nodo* inicio, Nodo* fin)
{
	Nodo* i = inicio;
	Nodo* anterior;
	Nodo* j = inicio;
	string nomAux;
	int ntaux;
	int genaux;

	while (j != fin && j != NULL)
	{
		if (j->nationalNumber < fin->nationalNumber)
		{
			if (j != i) // si apuntan a diferentes nodos, realizar intercambio
			{
				nomAux = i->nombre;
				ntaux = i->nationalNumber;
				genaux = i->generacion;

				i->nombre = j->nombre;
				i->nationalNumber = j->nationalNumber;
				i->generacion = j->generacion;

				j->nombre = nomAux;
				j->nationalNumber = ntaux;
				j->generacion = genaux;
			}

			anterior = i;
			i = i->next;
		}

		j = j->next;
	}


	nomAux = i->nombre;
	ntaux = i->nationalNumber;
	genaux = i->generacion;

	i->nombre = fin->nombre;
	i->nationalNumber = fin->nationalNumber;
	i->generacion = fin->generacion;

	fin->nombre = nomAux;
	fin->nationalNumber = ntaux;
	fin->generacion = genaux;


	return anterior;
}

void Lista::QuickSortNT(Nodo* inicio, Nodo* fin)
{

	Nodo* pivote;
	Nodo* pivote2;

	if (inicio != fin)
	{
		pivote = PivoteNT(inicio, fin);
		pivote2 = pivote->next;

		QuickSortNT(inicio, pivote);

		if (pivote2 != NULL)
		{
			QuickSortNT(pivote2, fin);
		}
		else
		{
			QuickSortNT(pivote, fin);
		}
	}

}

Lista::Nodo* Lista::PivoteGen(Nodo* inicio, Nodo* fin)
{
	Nodo* i = inicio;
	Nodo* anterior = inicio;
	Nodo* j = inicio;
	string nomAux;
	int ntaux;
	int genaux;

	while (j != fin && j != NULL)
	{
		if (j->generacion <= fin->generacion)
		{
			if (((j->generacion < fin->generacion)) || (j->generacion == fin->generacion) && (j->nombre < fin->nombre))
			{
				if (j != i)
				{
					nomAux = i->nombre;
					ntaux = i->nationalNumber;
					genaux = i->generacion;

					i->nombre = j->nombre;
					i->nationalNumber = j->nationalNumber;
					i->generacion = j->generacion;

					j->nombre = nomAux;
					j->nationalNumber = ntaux;
					j->generacion = genaux;
				}

				anterior = i;
				i = i->next;
			}
		}

		j = j->next;
	}


	nomAux = i->nombre;
	ntaux = i->nationalNumber;
	genaux = i->generacion;

	i->nombre = fin->nombre;
	i->nationalNumber = fin->nationalNumber;
	i->generacion = fin->generacion;

	fin->nombre = nomAux;
	fin->nationalNumber = ntaux;
	fin->generacion = genaux;


	return anterior;
}

void Lista::QuickSortGen(Nodo* inicio, Nodo* fin)
{

	Nodo* pivote;
	Nodo* pivote2;


	if (inicio != fin)
	{
		pivote = PivoteGen(inicio, fin);
		pivote2 = pivote->next;

		QuickSortGen(inicio, pivote);

		if (pivote2 != NULL)
		{
			QuickSortGen(pivote2, fin);
		}
		else
		{
			QuickSortGen(pivote, fin);
		}
	}

}

Lista::Nodo* Lista::NodoEnPosicion(int index)
{
	Nodo* actual = Header;
	int contar = 0;

	while (contar != index)
	{
		actual = actual->next;
		contar++;
	}

	return actual;
}

void Lista::ShellSortNT()
{
	string nomAux;
	int ntaux;
	int genaux;

	int Cantidad = ListCount();
	int  k = trunc(Cantidad / 2);

	Nodo* actual = Header;
	Nodo* node = NodoEnPosicion(k);

	while (k > 1)
	{

		while (node != NULL)
		{

			if (node->nationalNumber < actual->nationalNumber)
			{
				nomAux = actual->nombre;
				ntaux = actual->nationalNumber;
				genaux = actual->generacion;

				actual->nombre = node->nombre;
				actual->nationalNumber = node->nationalNumber;
				actual->generacion = node->generacion;

				node->nombre = nomAux;
				node->nationalNumber = ntaux;
				node->generacion = genaux;
			}

			node = node->next;
			actual = actual->next;
		}

		k = trunc(k / 2);
		actual = Header;
		node = NodoEnPosicion(k);
	}

	InsertionSortNT();
}

void Lista::ShellSortGen()
{

	string nomAux;
	int ntaux;
	int genaux;

	int Cantidad = ListCount();
	int  k = trunc(Cantidad / 2);

	Nodo* actual = Header;
	Nodo* node = NodoEnPosicion(k);

	while (k > 1)
	{

		while (node != NULL)
		{

			if (node->generacion < actual->generacion || (node->generacion == actual->generacion && node->nombre < actual->nombre))
			{
				nomAux = actual->nombre;
				ntaux = actual->nationalNumber;
				genaux = actual->generacion;

				actual->nombre = node->nombre;
				actual->nationalNumber = node->nationalNumber;
				actual->generacion = node->generacion;

				node->nombre = nomAux;
				node->nationalNumber = ntaux;
				node->generacion = genaux;
			}

			node = node->next;
			actual = actual->next;
		}

		k = trunc(k / 2);
		actual = Header;
		node = NodoEnPosicion(k);
	}

	InsertionSortGen();

}

Lista::Nodo* Lista::NodoAnterior(Nodo* Node)
{
	Lista::Nodo* actual = Header;


	while (actual->next != Node && actual->next != NULL)
	{
		actual = actual->next;
	}

	if (actual->next == NULL)
		return Header;
	else
		return actual;
}

void Lista::InsertionSortNT()
{
	string nomAux;
	int ntaux;
	int genaux;

	Nodo* nodoizquierda = Header;
	Nodo* actual = nodoizquierda->next;
	Nodo* auxizq;
	Nodo* anterior;

	while (actual != NULL)
	{
		if (nodoizquierda->nationalNumber > actual->nationalNumber)
		{

			nomAux = actual->nombre;
			ntaux = actual->nationalNumber;
			genaux = actual->generacion;

			actual->nombre = nodoizquierda->nombre;
			actual->nationalNumber = nodoizquierda->nationalNumber;
			actual->generacion = nodoizquierda->generacion;

			nodoizquierda->nombre = nomAux;
			nodoizquierda->nationalNumber = ntaux;
			nodoizquierda->generacion = genaux;


			auxizq = nodoizquierda; //se guarda el dato de la izquierda
			anterior = NodoAnterior(auxizq); //recibe el anteriro al dato de la izquierda

			while ((auxizq != Header) && anterior->nationalNumber > auxizq->nationalNumber)
			{

				nomAux = auxizq->nombre;
				ntaux = auxizq->nationalNumber;
				genaux = auxizq->generacion;

				auxizq->nombre = anterior->nombre;
				auxizq->nationalNumber = anterior->nationalNumber;
				auxizq->generacion = anterior->generacion;

				anterior->nombre = nomAux;
				anterior->nationalNumber = ntaux;
				anterior->generacion = genaux;

				auxizq = NodoAnterior(auxizq);
				anterior = NodoAnterior(anterior);
			}

		}

		nodoizquierda = nodoizquierda->next;
		actual = actual->next;

	}

}

void Lista::InsertionSortGen()
{
	string nomAux;
	int ntaux;
	int genaux;

	Nodo* nodoizquierda = Header;
	Nodo* actual = nodoizquierda->next;
	Nodo* auxizq;
	Nodo* anterior;

	while (actual != NULL)
	{
		if (nodoizquierda->generacion > actual->generacion || (nodoizquierda->generacion == actual->generacion && nodoizquierda->nombre > actual->nombre))
		{

			nomAux = actual->nombre;
			ntaux = actual->nationalNumber;
			genaux = actual->generacion;

			actual->nombre = nodoizquierda->nombre;
			actual->nationalNumber = nodoizquierda->nationalNumber;
			actual->generacion = nodoizquierda->generacion;

			nodoizquierda->nombre = nomAux;
			nodoizquierda->nationalNumber = ntaux;
			nodoizquierda->generacion = genaux;


			auxizq = nodoizquierda; //se guarda el dato de la izquierda
			anterior = NodoAnterior(auxizq); //recibe el anteriro al dato de la izquierda

			while (auxizq != Header && (anterior->generacion > auxizq->generacion || (anterior->generacion == auxizq->generacion && anterior->nombre > auxizq->nombre)))
			{

				nomAux = auxizq->nombre;
				ntaux = auxizq->nationalNumber;
				genaux = auxizq->generacion;

				auxizq->nombre = anterior->nombre;
				auxizq->nationalNumber = anterior->nationalNumber;
				auxizq->generacion = anterior->generacion;

				anterior->nombre = nomAux;
				anterior->nationalNumber = ntaux;
				anterior->generacion = genaux;

				auxizq = NodoAnterior(auxizq);
				anterior = NodoAnterior(anterior);
			}

		}

		nodoizquierda = nodoizquierda->next;
		actual = actual->next;

	}

}

void Lista::SelectionSortNT()
{
	Nodo* Actual = Header;
	Nodo* ActualComparar;
	Nodo* Siguiente;
	Nodo* Menor;
	string nomAux;
	int ntaux;
	int genaux;


	while (Actual != NULL)
	{
		Menor = NULL;
		ActualComparar = Actual;
		Siguiente = ActualComparar->next;

		while (Siguiente != NULL)
		{
			if (Menor == NULL && (Siguiente->nationalNumber < ActualComparar->nationalNumber))//primera iteración
			{
				Menor = Siguiente;
			}
			else if (Menor != NULL)//segunda iteración para establecer el menor de todos
			{
				if (Siguiente->nationalNumber < Menor->nationalNumber)
					Menor = Siguiente;
			}

			Siguiente = Siguiente->next; //al se null, este sale del while
		}

		if (Menor != NULL) //encontró un dato menor
		{

			nomAux = ActualComparar->nombre;
			ntaux = ActualComparar->nationalNumber;
			genaux = ActualComparar->generacion;

			ActualComparar->nombre = Menor->nombre;
			ActualComparar->nationalNumber = Menor->nationalNumber;
			ActualComparar->generacion = Menor->generacion;

			Menor->nombre = nomAux;
			Menor->nationalNumber = ntaux;
			Menor->generacion = genaux;
		}

		Actual = Actual->next;

	}

}

void Lista::SelectionSortGen()
{

	Nodo* Actual = Header;
	Nodo* ActualComparar;
	Nodo* Siguiente;
	Nodo* Menor;
	string nomAux;
	int ntaux;
	int genaux;


	while (Actual != NULL)
	{
		Menor = NULL;
		ActualComparar = Actual;
		Siguiente = ActualComparar->next;

		while (Siguiente != NULL)
		{
			if (Menor == NULL && (Siguiente->generacion <= ActualComparar->generacion))
			{
				if ((Siguiente->generacion < Actual->generacion) || ((Siguiente->generacion == Actual->generacion) && (Siguiente->nombre < Actual->nombre)))
					Menor = Siguiente;
			}
			else if (Menor != NULL)
			{
				if ((Siguiente->generacion < Menor->generacion) || ((Siguiente->generacion == Menor->generacion) && (Siguiente->nombre < Menor->nombre)))
					Menor = Siguiente;

			}

			Siguiente = Siguiente->next;
		}

		if (Menor != NULL)
		{

			nomAux = ActualComparar->nombre;
			ntaux = ActualComparar->nationalNumber;
			genaux = ActualComparar->generacion;

			ActualComparar->nombre = Menor->nombre;
			ActualComparar->nationalNumber = Menor->nationalNumber;
			ActualComparar->generacion = Menor->generacion;

			Menor->nombre = nomAux;
			Menor->nationalNumber = ntaux;
			Menor->generacion = genaux;
		}

		Actual = Actual->next;

	}

}
