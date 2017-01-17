// Chapter 1-3 C++ primer

#include <iostream>
#include <string>
#define ZERO 0;
double c_to_f (int n)
{
	using namespace std;
	cout << "Please enter Celsius: ";
	cin >> n;
	double a = 1.8 * n +32;
	cout << "The degree Celsius of " << n << " degree C is " << a <<  ". ";
	cout << "The bytes is " << sizeof(n) << " bytes.";
	return sqrt(n);
}

void _types()
{
	using namespace std;
	int a;
	double b;
	short c;
	long d;
	cout << "Please enter int:";
	cin >> a;
	cout << "Please enter double:";
	cin >> b;
	cout << "Please enter short:";
	cin >> c;
	cout << "Please enter long:";
	cin >> d;
	cout << endl;
	cout << "The bytes of int is " << sizeof a;
	cout << endl;
	cout << "The bytes of double is " << sizeof b;
	cout << endl;
	cout << "Minimum int value is " << INT_MIN;
	cout << endl;
	cout << "Maximum int value is " << INT_MAX;
	cout << endl;

	cout << "The bytes of short is " << sizeof c;
	cout << endl;
	cout << "Minimum short value is " << SHRT_MIN;
	cout << endl;
	cout << "Maximum short value is " << SHRT_MAX;
	cout << endl;

	cout << "The bytes of long is " << sizeof d;
	cout << endl;
	cout << "Minimum long value is " << LONG_MIN;
	cout << endl;
	cout << "Maximum long value is " << LONG_MAX << endl;
	cout << "Bits per bytes = " << CHAR_BIT << endl;

}

void samAndsue()
{
	using namespace std;
	short sam = SHRT_MAX; // initialize a variable to max value
	unsigned short sue = sam;// okay if variable sam already defined

	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl
		<< "Add $1 to each account." << endl << "Now ";
	sam = sam + 1;
	sue = sue + 1;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited.\nPoor Sam!" << endl;
	sam = ZERO;
	sue = ZERO;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl;
	cout << "Take $1 from each account." << endl << "Now ";
	sam = sam - 1;
	sue = sue - 1;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl << "Lucky Sue!" << endl;
}

void display()
{
	using namespace std;
	char dog[] = { '\0','b','a','d','\0' };
	char cat[] = " bad bad bad ";
	char alarm = '\a';
	//
	std::cout << "The first message from 2037\n";
	cout << "Jack Wang:";
	cout << endl;
	std::cout << "Hello, 2017!" << std::endl;
	cout << endl;
	cout << alarm;
	//helloworld
	
	printf("string %s\n", "25");
	printf("interger %d\n", 25);
	cout << "XXXXXX\r special character \\\?\'\"\n";
	cout << "horizontal tab \t\n";
	cout << "vertical tab \v\n";
	cout << endl;
	//
	cout << "char dog[5] = { '\\0','b','a','d','\\0' };\ndisplays: \n";
	cout << dog;
	cout << "char cat[] = \" bad bad bad \";\ndisplays: \n";
	cout << cat;
}

void diff_decimal()
{
	using namespace std;
	int a = 42;		//decimal
	int b = 0x42; //hex
	int c = 042;	//octal
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	int d;
	cin >> d;
	cout << "the hex of input is " << endl;
	cout << hex;
	cout << d;
}

void check_char()
{
	using namespace std;
	cout << "the character is " << 'A'<<endl;
	cout << "the code of A is ";
	cout << (int)'A' << endl;

	char a;
	cin >> a;
	cout << "the character is ";
	cout.put(a) << endl;
	cout << "the code is " << (int)a << endl;
}

void ten_divide_three()
{
	using namespace std;
	cout << "float " << 1.0e5f / 3.0f << endl;
	cout << "double " << 1.0e5 / 3.0 << endl;
	cout << "long " << 10e5L / 3L << endl;
	cout << "int " << 10e5 / 3 << endl;
}

void _mod()
{
	using namespace std;
	int a;
	cout << "How heavy are you in pounds?\n";
	cin >> a;
	cout << a << " pounds are " << a / 14 << " stones and " << a % 14 << " pounds.\n";



}

void _arry() //ttt
{
	using namespace std;
	cout << "Please enter\n";
	const int b = 10;
	char name1[b];
	cin.getline(name1,b);
	for (int a = strlen(name1) - 1; a >= 0; a--) {
		cout << name1[a];	
	}
	cout << "\nOops!\n";
	cout << "\nYour name is " << name1 << endl;
	cout << "Your name has " << strlen(name1) << " letters.\n";
	cout << "Your name has " << sizeof name1 << " bytes.\n" << endl;
	cout << "Good to see ya!";
}

void _instr3()
{
	//.get()->new line
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];
	cout << "Enter your name : \n";
	cin.get(name, ArSize).get(); // read string, newline
	cout << "Enter your favorite dessert : \n";
	cin.get(dessert, ArSize).get();
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";
}

void _stringOperation()
{
	using namespace std;
	char charr1[20]; // create an empty array
	char charr2[20] = "jaguar"; // create an initialized array
	string str1; // create an empty string object
	string str2 = "panther"; // create an initialized string
	cout << "Enter a kind of feline : ";
	cin >> charr1;
	cout << "Enter another kind of feline : ";
	cin >> str1; // use cin for input
	cout << "Here are some felines : \n";
	cout << charr1 << " " << charr2 << " " << str1 << " " << str2 // use cout for output
		<< endl;
	cout << "The third letter in " << charr2 << " is "
		<< charr2[2] << endl;
	cout << "The third letter in " << str2 << " is "
		<< str2[2] << endl; // use array notation
}
int main()
{
	using namespace std;
	//c_to_f(0);
	//display();
	//_types();			//
	//samAndsue();		//overfloat
	//diff_decimal();
	//check_char();
	//alarm();
	//ten_divide_three();
	//_mod();
	//_arry();
	//_instr3();
	_stringOperation();
	cout << endl;
	system("pause");
	return 0;
}
