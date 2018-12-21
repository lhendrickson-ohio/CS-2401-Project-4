/********************************************************************
	Liam Hendrickson
	CS 2401 - John Dolan
	Project 4
	Ohio University
*********************************************************************/

#ifndef DLIST_H
#define DLIST_H
#include "dnode.h"
#include "iterator.h"
#include <iostream>

template<class D>
class iterator;

template<class D>
class dlist{
	public:
		typedef itr<D> iterator;

		dlist();
		~dlist();
		dlist(const dlist& other);
		dlist& operator =(const dlist& other);


		Dnode<D> *begin()const{return head;}
		Dnode<D> *end()const{return tail;}
		Dnode<D> *r_begin()const{return tail;}
		Dnode<D> *r_end()const{return head;}

		int size()const{return count;}
		void front_insert(D item);
		void show()const;
		void reverse_show()const;
		void rear_insert(D item);
		void front_remove();
		void rear_remove();

		void insert_before(itr<D> x,D item);
		void insert_after(itr<D> x,D item);
		void remove(itr<D>& it);

	private:
		Dnode<D>* head;
		Dnode<D>* tail;
		int count;


};

#include "dlist.template"
#endif
