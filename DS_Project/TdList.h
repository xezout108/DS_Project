#pragma once

#include <iostream>
#include <string>
#include <Windows.h>

#include "UnsortedList.h"
#include "Todo.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;

class TdList : public UnsortedList<Todo>
{
public:
	TdList();
	~TdList();

	/*
		Function : List를 초기화하는 함수
		Pre : X
		Post : List가 초기화됨
	*/
	void initialize_list();

	/*
		Function : 새로운 todo를 list 안에 넣는 함수
		Pre : X
		Post : 새로운 todo가 list 안에 들어감
	*/
	void add_todo();

	/*
		Function : List의 item들을 출력하는 함수
		Pre : List가 초기화되어있어야 함
		Post : Todo의 제목을 List형태로 출력함
	*/
	void print_list();

	/*
		Function : idx번째에 있는 Todo의 info를 출력하는 함수
		Pre : List가 초기화되어있어야 함
		Post : idx번째에 있는 Todo의 info를 출력
	*/
	void print_todo_info(int idx);

	/*
		Function : idx번째에 있는 Todo를 수정하는 함수
		Pre : List가 초기화되어있어야 함
		Post : idx번째에 있는 Todo를 수정하는 함수
	*/
	void modify_todo(int idx);

	/*
		Function : idx번째에 있는 Todo를 제거하는 함수
		Pre : List가 초기화되어있어야 함
		Post : idx번째에 있는 Todo를 제거하는 함수
	*/
	void delete_todo(int idx);

	/*
		Function : idx_cnt를 return하는 함수
		Pre : X
		Post : idx_cnt를 return함
	*/
	int get_idx_cnt();

	/*
		Function : idx_cnt를 new_idx로 설정하는 함수
		Pre : X
		Post : idx_cnt를 new_idx로 설정함
	*/
	void set_idx_cnt(int new_idx);

private:
	int idx_cnt;
};

