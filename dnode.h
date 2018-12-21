/*************************************
	Liam Hendrickson
	CS 2401 - John Dolan
	Project 4
	Ohio University
*************************************/

#ifndef DNODE_H
#define DNODE_H
#include <string>
#include <cstdlib>
#include <iostream>


template<class D>
class Dnode
{
	public:
		Dnode(D item, Dnode* p=NULL, Dnode* n=NULL){datafield=item; nextptr=n; prevptr=p;}

		Dnode *next()const{return nextptr;}
		Dnode *prev()const{return prevptr;}
		D data()const{return datafield;}

		void set_next(Dnode* n=NULL){nextptr=n;}
		void set_prev(Dnode* p=NULL){prevptr= p;}
		void set_data(D item){datafield = item;}
		void output(std::ostream& outs)const{std::cout<< data();}
		void input(std::istream& ins){std::cin>>data();}

	private:
		Dnode* nextptr;
		Dnode* prevptr;
		D datafield;
};

template<class D>
std::ostream&  operator<<(std::ostream& outs, const Dnode<D>& item);

template<class D>
std::istream& operator>>(std::istream& ins, const Dnode<D>& item);

template<class D>
std::istream& operator>>(std::istream & ins, const Dnode<D>& item)
{
	item.input(ins);
	return ins;
}


template<class D>
std::ostream& operator<<(std::ostream& outs, const Dnode<D>& item)
{
	item.output(outs);
	return outs;
}

#endif
