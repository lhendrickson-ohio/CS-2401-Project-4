/****************************************
	Liam Hendrickson
	CS 2401 - John Dolan
	Project 4
	Ohio University
***************************************/
#ifndef ITERATOR
#define ITERATOR

#include <cstdlib>
#include "dnode.h"
template<class D>
class dlist;

template<class D>
class itr
{
	public:
		friend class dlist<D>;

		itr(Dnode<D>* init=NULL){current=init;}

		bool operator ==(const itr& other)const{return other.current == current;}

		bool operator !=(const itr& other)const{return other.current !=current;}

		D operator*(){return current->data();}

		itr& operator++(){current=current->next(); return *this;}

		itr operator++(int){itr orig(current); current=current->next(); return orig;}

		itr& operator--(){current=current->prev(); return *this;}

		itr operator--(int){itr orig(current); current=current->prev(); return orig;}

	private:
		Dnode<D>* current;
};
#endif
