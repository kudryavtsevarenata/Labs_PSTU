#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using namespace std;

string names[] = {"Dmitriy", "Anatoliy", "Ilya", "Alex", "Mark", "Paul", "Yuri", "Anton", "Michael", "Maga"};
string phones[] = {"89021243546", "89017683020", "89126592760", "89026788887", "89032559382", "89021785665", "89626597474", "89021243546", "89021243546", "89021243546"};
string ID[] = {"5717 657659", "5717 675945", "5717 729575", "5717 128594", "5717 900087", "5717 234546", "5717 655555", "5717 123456", "5717 123456", "5717 123456"};
string dates[] = {"11.09.2000", "12.12.2012", "11.09.2001", "11.09.2002", "11.10.2012", "13.06.2007", "11.01.2001", "09.09.2009", "02.09.2003", "19.06.2003"};
int collisions_count = 0;

struct Human
{
	Human()
	{
		full_name = "NULL";
		ID_number = "NULL";
		phone_number = "NULL";
	}
	string full_name;
	string ID_number;
	string phone_number;
};

struct hash_table
{
	Human* array;
	hash_table(int size)
	{
		array = new Human[size];
	}
	~hash_table()
	{
		delete [] array;
	}
	void add(Human temp, const int size);
	void pop(string date_to_delete, const int size);
	void find_index(string date_of_birth, const int size);
};
void show_info(const Human temp);
void show_hash_table(hash_table* object, const int size);
Human create_random_human();
string get_random_name(); string get_random_ID();
string get_random_phone();
void fill_array_random_humans(Human* array, const int count);
int get_sum_of_phone(string str); int get_random_number();
int hash_function(string str, const int size);

int main()
{
	srand(time(NULL));
	setlocale(0, "");
	int size;
	string key;
	do
	{
		cout << "Input amount of elements: ";
		cin >> size;
	} while (size < 10);
	cout << endl;
	Human* array = new Human[size];
	hash_table table(size);
	fill_array_random_humans(array, size);
	for (int i = 0; i < size; i++)
	{
		table.add(array[i], size);
	}
	show_hash_table(&table, size);
	cout << "Input key: ";
	cin >> key;
	table.find_index(key, size);
	table.pop(key, size);
	cout << endl << endl;
	show_hash_table(&table, size);
	cout << endl << "Amount of collisions for " << size << " = " << collisions_count << endl;
	delete [] array;
	return 0;
}

void hash_table::find_index(string phone_number, const int size)
{
	int hash = hash_function(phone_number, size);
	int index = 0;
	while (array[index].phone_number != phone_number && index < size)
	{
		index++;
	}
	if (index >= size)
	{
		index = 0;
		while (array[index].phone_number != phone_number && index < hash)
		{
			index++;
		}
		if (index > hash)
			cout << "Not found" << endl;
		else
			cout << "Index = " << index << endl;
	}
	else
	{
		cout << "Index = " << index << endl;
	}
}


void hash_table::add(Human temp, const int size)
{
	int index = hash_function(temp.phone_number, size);
	int hash = index;
	if (array[index].full_name == "NULL")
	{
		array[index] = temp;
		return;
	}
	else
	{
		while (index < size)
		{
			if (array[index].full_name == "NULL")
			{
				array[index] = temp;
				return;
			}
			index++;
			collisions_count++;
		}
		if (index >= size)
		{
			index = 0;
			collisions_count++;
			while (index < hash)
			{
				if (array[index].full_name == "NULL")
				{
					array[index] = temp;
					return;
				}
				index++;
				collisions_count++;
			}
		}
	}
}

void hash_table::pop(string phone_to_delete, const int size)
{
	int index = hash_function(phone_to_delete, size);
	if (array[index].phone_number == phone_to_delete)
	{
		array[index] = Human();
		return;
	}
	else
	{
		while (index < size)
		{
			if (array[index].phone_number == phone_to_delete)
			{
				array[index] = Human();
				return;
			}
			++index;
		}
		if (index >= size)
		{
			index = 0;
			while (index < size)
			{
				if (array[index].phone_number == phone_to_delete)
				{
					array[index] = Human();
					return;
				}
				index++;
			}
		}
	}
}

void show_hash_table(hash_table* table, const int size)
{
	for (int i = 0; i < size; i++)
		show_info(table->array[i]);
}
void show_info(const Human temp)
{
	cout << "Name: " << temp.full_name
		 << "\nPhone number: " << temp.phone_number
		 << "\nPassport: " << temp.ID_number << endl << endl;
}
int get_random_number()
{
	return rand() % 10;
}
int get_sum_of_phone(string str)
{
	return stoi(str.substr(4, 2)) + stoi(str.substr(6, 2)) + stoi(str.substr(8, 2)) + stoi(str.substr(10, 2));
}
int hash_function(string str, const int size)
{
	double a = 0.55 * get_sum_of_phone(str);
	double c = size * (a - static_cast<int>(a));
	return static_cast<int>(c);
}
void fill_array_random_humans(Human* array, const int count)
{
	for (int i = 0; i < count; i++)
		array[i] = create_random_human();
}
Human create_random_human()
{
	Human temp;
	temp.full_name = get_random_name();
	temp.ID_number = get_random_ID();
	temp.phone_number = get_random_phone();
	return temp;
}
string get_random_ID()
{
	return ID[get_random_number()];
}
string get_random_name()
{
	return names[get_random_number()];
}
string get_random_phone()
{
	return phones[get_random_number()];
}
