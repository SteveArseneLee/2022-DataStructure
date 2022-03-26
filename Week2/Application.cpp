#include "Application.h"


// Program driver.
void Application::Run()
{
	while (1)
	{
		m_Command = GetCommand();

		switch (m_Command)
		{
		case 1:		// read a record and add to list.
			AddItem();
			break;
		case 2:		// display all the records in list on screen.
			DisplayAllItem();
			break;
		case 3:		// make empty list.
			m_List.MakeEmpty();
			break;
		case 4:		// [작성] search item from list.
			SearchData();
			break;
		case 5:		// [작성] delete item from list
			DeleteItem();
			break;
		case 6:		// [작성] update item in list
			UpdateItem();
			break;
		case 7:		// load list data from a file.
			ReadDataFromFile();
			break;
		case 8:		// save list data into a file.
			WriteDataToFile();
			break;
		case 0:
			return;
		default:
			cout << "\tIllegal selection...\n";
			break;
		}
	}
}


// Display command on screen and get a input from keyboard.
int Application::GetCommand()
{
	int command;
	cout << endl << endl;
	cout << "\t---ID -- Command ----- " << endl;
	cout << "\t   1 : Add item" << endl;
	cout << "\t   2 : Print all on screen" << endl;
	cout << "\t   3 : Make empty list" << endl;
	cout << "\t   4 : Get from file" << endl;
	cout << "\t   5 : Put to file " << endl;
	cout << "\t   0 : Quit" << endl;

	cout << endl << "\t Choose a Command--> ";
	cin >> command;
	cout << endl;

	return command;
}


// Add new record into list.
int Application::AddItem()
{
	// [작성] 입력받은 레코드를 리스트에 add, 리스트가 full일 경우는 add하지 않고 0을 리턴


	// [작성] 현재 list 출력


	return 1;
}


// Display all records in the list on screen.
void Application::DisplayAllItem()
{
	ItemType data;

	cout << "\n\tCurrent list" << endl;

	// [작성] list의 모든 데이터를 화면에 출력

}


// Open a file by file descriptor as an input file.
int Application::OpenInFile(char* fileName)
{
	m_InFile.open(fileName);	// file open for reading.

	// [작성] 파일 오픈에 성공하면 1, 그렇지 않다면 0을 리턴.

}


// Open a file by file descriptor as an output file.
int Application::OpenOutFile(char* fileName)
{
	m_OutFile.open(fileName);	// file open for writing.

	// [작성] 파일 오픈에 성공하면 1, 그렇지 않다면 0을 리턴.

}


// Open a file as a read mode, read all data on the file, and set list by the data.
int Application::ReadDataFromFile()
{
	int index = 0;
	ItemType data;	// 읽기용 임시 변수

	char filename[FILENAMESIZE];
	cout << "\n\tEnter Input file Name : ";
	cin >> filename;

	// [작성] file open, open error가 발생하면 0을 리턴


	// [작성] 파일의 모든 내용을 읽어 list에 추가


	m_InFile.close();	// file close

	// [작성] 현재 list 출력


	return 1;
}


// Open a file as a write mode, and write all data into the file,
int Application::WriteDataToFile()
{
	ItemType data;	// 쓰기용 임시 변수

	char filename[FILENAMESIZE];
	cout << "\n\tEnter Output file Name : ";
	cin >> filename;

	// [작성] file open, open error가 발생하면 0을 리턴


	// [작성] list 포인터를 초기화


	// [작성] list의 모든 데이터를 파일에 쓰기


	m_OutFile.close();	// file close

	return 1;
}