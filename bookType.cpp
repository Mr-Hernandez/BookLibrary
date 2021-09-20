#include "bookType.h"
#include <string>
//#include <iomanip>

bookType::bookType()
{
}

void bookType::setBookInfo(std::string titlex, std::string ISBNx, std::string publisherx,
	int publishYearx, std::string authx[], double costx, int copiesx, int authorCountx)
{
	title = titlex;
	ISBN = ISBNx;
	publisher = publisherx;
	yearPublished = publishYearx;
	price = costx;
	copiesInStock = copiesx;
	authorCount = authorCountx;
	for (int i = 0, length = sizeof(authx); i < length; i++)
	{
		author[i] = authx[i];
	}
}

void bookType::printbookTitle()
{
	std::cout << "Title: " << title << std::endl;
}

void bookType::printbookTitleAndISBN()
{
	std::cout << "Title: " << title << ";   ISBN:  " << ISBN << std::endl;
}

bool bookType::isISBN(std::string isbn)
{
	if (ISBN == isbn)return true;
	else return false;
}

bool bookType::isTitle(std::string titlex)
{
	if (title == titlex)return true;
	else return false;
}

void bookType::updateQuantity(int newCopies)
{
	copiesInStock = newCopies;
}

void bookType::printInfo()
{
	std::cout << "Title: " << title << std::endl;
	std::cout << "Author/s: ";

	for (int i = 0, length = authorCount; i < length; i++)
	{
		std::cout << author[i] << std::endl;
	}
	std::cout << "Publisher: " << publisher << std::endl;
	std::cout << "ISBN: " << ISBN << std::endl;
	std::cout << "Year Published: " << yearPublished << std::endl;
	std::cout << "in Stock: " << copiesInStock << std::endl;
	std::cout << std::fixed << std::setprecision(2) << "Price: " << price << std::endl;

}

void bookType::updateTitle(std::string newTitlex)
{
	title = newTitlex;
}

void bookType::updatePublisher(std::string newPublisher)
{
	publisher = newPublisher;
}

void bookType::updateISBN(std::string newISBN)
{
	ISBN = newISBN;
}

void bookType::updatePrice(double newPrice)
{
	price = newPrice;
}

void bookType::updateAuthor(std::string newAuthor[], int authorCountx)
{
	authorCount = authorCountx;
	for (int i = authorCount; i < 4; i++)
	{
		author[i] = "";
	}
	for (int i = 0; i <= authorCount; i++)
	{
		author[i] = newAuthor[i];
	}
}

void bookType::printBookInfo()
{
	std::cout << "Title: " << title << std::endl;
	std::cout << "Author/s: ";

	for (int i = 0, length = authorCount; i < length; i++)
	{
		std::cout << author[i] << std::endl;
	}
	std::cout << "Publisher: " << publisher << std::endl;
	std::cout << "ISBN: " << ISBN << std::endl;
	std::cout << "Year Published: " << yearPublished << std::endl;
	std::cout << "in Stock: " << copiesInStock << std::endl;
	std::cout << std::fixed << std::setprecision(2) << "Price: " << price << std::endl;
}
bookType::~bookType()
{
}
