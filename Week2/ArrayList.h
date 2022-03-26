#ifndef _UNSORTEDLIST_H
#define _UNSORTEDLIST_H

#include <iostream>
#include <fstream>	
#include <string>
using namespace std;

#include "ItemType.h"

#define MAXSIZE 5

/**
*	array based simple unsorted list.
*/
class ArrayList
{
public:
	/**
	*	default constructor.
	*/
	ArrayList()
	{
		m_Length = 0;
		ResetList();
	}

	/**
	*	destructor.
	*/
	~ArrayList() {}

	/**
	*	@brief	Make list empty.
	*	@pre	none.
	*	@post	clear list.
	*/
	void MakeEmpty();

	/**
	*	@brief	Get a number of records in current list.
	*	@pre	none.
	*	@post	none.
	*	@return	number of records in current list.
	*/
	int GetLength();

	/**
	*	@brief	Check capacity of list is full.
	*	@pre	none.
	*	@post	none.
	*	@return	return true if list capacity reached to the upper bound, otherwise return false.
	*/
	bool IsFull();

	/**
	*	@brief	add a new data into list.
	*	@pre	list should be initialized.
	*	@post	added the new record into the list.
	*	@param	data	new data.
	*	@return	return 1 if this function works well, otherwise 0.
	*/
	int Add(ItemType data);

	/**
	*	@brief	Initialize list iterator.
	*	@pre	list should be initialized.
	*	@post	iterator is reset.
	*/
	void ResetList();

	/**
	*	@brief	move list iterator to the next item in list and get that item.
	*	@pre	list and list iterator should not be initialized.
	*	@post	iterator is moved to next item.
	*	@param	data	get current iterator's item. it does not need to be initialized.
	*	@return	index of current iterator's item if is not end of list, oterwise return -1.
	*/
	int GetNextItem(ItemType& data);

	/** [작성]
	*	@brief list에서 다음 element를 얻습니다
	*	@pre  list는 초기화된 상태.
	*	@post 다음 위치를 업데이트 함.
	*	@param data 현재 데이터
	*	@return 현재 위치가 다음 위치로 바껴서 반환됩니다.
	*/
	int Get(ItemType& data);

	/** [작성]
	*	@brief 원하는 키의 데이터를 알려줍니다
	*	@pre list가 초기화된 상태.
	*	@post 현재 데이터가 무엇인지 알려줍니다
	*	@param data 현재 데이터
	*	@return 현재 키의 데이터를 반환
	*/
	void Delete(ItemType data);

	/** [작성]
	*	@brief element를 삭제합니다
	*	@pre list가 초기화되있는 상태
	*	@post 가리킨 element를 삭제합니다
	*	@param data 현재 데이터
	*	@return none.
	*/
	void Replace(ItemType data);

private:
	ItemType m_Array[MAXSIZE];  ///< list array.
	int m_Length;				///< number of elements in list.
	int m_CurPointer;			///< iterator pointer.
};

#endif	// _UNSORTEDLIST_H