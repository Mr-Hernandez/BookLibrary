#pragma once
#include <iostream>
#include <string>
#include <iomanip>

class bookType
{
public:
	bookType();
	void setBookInfo(std::string titlex, std::string ISBNx, std::string publisherx,
		int publishYearx, std::string authx[], double costx, int copiesx, int authorCountx);
	void printbookTitle();
	void printbookTitleAndISBN();
	bool isISBN(std::string);
	bool isTitle(std::string);
	void updateQuantity(int);
	void printInfo();
	void updateTitle(std::string);
	void updatePublisher(std::string);
	void updateISBN(std::string);
	void updatePrice(double);
	void updateAuthor(std::string[], int);
	void printBookInfo();

	~bookType();
private:
	std::string title; 
	std::string author[4];
	std::string publisher;
	std::string ISBN;
	double price;
	int yearPublished;
	int copiesInStock;
	int authorCount;
};

