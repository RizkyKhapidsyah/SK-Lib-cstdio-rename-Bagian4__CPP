#include <iostream>
#include <cstdio>
#include <conio.h>

/*
	Source by Programiz
	Modified For Learn by RK
	I.D.E : VS2019
*/

using namespace std;

int main() {
	char oldname[] = "C:\\Users\\file_old.txt";
	char newname[] = "C:\\Users\\New Folder\\file_new.txt";

	if (rename(oldname, newname) != 0) {
		perror("Error moving file");
	} else {
		cout << "File moved successfully";
	}
		
	_getch();
	return 0;
}