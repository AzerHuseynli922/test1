#include <iostream>
using namespace std;
#include <ctime>
#include<string.h>

//	+ , plus(addition)
//	−, minus(subtraction)
//	÷, obelus(division)
//	×, times(multiplication)
struct Calculator
{
	float number_1;
	float number_2;
	float number_3	;
	char operator_1;
	char operator_2;
	float result = 0;

};

void hesablama_1(float number_1, float number_2, float number_3, char operator_1, char operator_2,float result)
{

	if (operator_1 == '+' && operator_2 == '+')   // a + b + c 
	{
		cout <<'\t'<< number_1 << " " << operator_1 << " " << number_2 << " " << operator_2<<" " << number_3 << " = ";
		result = number_1 + number_2 + number_3;
		cout << result << endl;
	}
	else if (operator_1 == '+' && operator_2 == '-')  // a + b - c
	{
		cout << '\t' << number_1 << " " << operator_1 << " " << number_2 << " " << operator_2 <<" "<< number_3 << " = ";
		result = number_1 + number_2 - number_3;
		cout << result << endl;
	}
	else if (operator_1 == '-' && operator_2 == '+')  // a - b + c 
	{
		cout << '\t' << number_1 << " " << operator_1 << " " << number_2 << " " << operator_2 <<" "<< number_3 << " = ";
		result = number_1 - number_2 + number_3;
		cout << result << endl;
	}
	else if (operator_1 == '-' && operator_2 == '-')  // a - b -c 
	{
		cout << '\t' << number_1 << " " << operator_1 << " " << number_2 << " " << operator_2 << " " << number_3 << " = ";
		result = number_1 - number_2 - number_3;
		cout << result << endl;
	}
	else if (operator_1 == '*' && operator_2 == '+')  // a * b + c
	{
		cout << '\t' << number_1 << " " << operator_1 << " " << number_2 << " " << operator_2 << " " << number_3 << " = ";
		result = number_1 * number_2 + number_3;
		cout << result << endl;
	}
	else if (operator_1 == '*' && operator_2 == '-')  // a * b - c
	{
		cout << '\t' << number_1 << " " << operator_1 << " " << number_2 << " " << operator_2 << " " << number_3 << " = ";
		result = number_1 * number_2 - number_3;
		cout << result << endl;
	}
	else if (operator_1 == '+' && operator_2 == '*')  // a + b * c
	{
		cout << '\t' << number_1 << " " << operator_1 << " " << number_2 << " " << operator_2 << " " << number_3 << " = ";
		result = number_1 + number_2 * number_3;
		cout << result << endl;
	}
	else if (operator_1 == '-' && operator_2 == '*')  // a - b * c
	{
		cout << '\t' << number_1 << " " << operator_1 << " " << number_2 << " " << operator_2 << " " << number_3 << " = ";
		result = number_1 - number_2 * number_3;
		cout << result << endl;
	}
	else if (operator_1 == '/' && operator_2 == '+')  // a / b + c
	{
		cout << '\t' << number_1 << " " << operator_1 << " " << number_2 << " " << operator_2 << number_3 << " = ";
		result = number_1 / number_2 + number_3;
		cout << result << endl;
	}
	else if (operator_1 == '/' && operator_2 == '-')  // a / b - c
	{
		cout << '\t' << number_1 << " " << operator_1 << " " << number_2 << " " << operator_2 << " " << number_3 << " = ";
		result = number_1 / number_2 - number_3;
		cout << result << endl;
	}
	else if (operator_1 == '+' && operator_2 == '/')  // a + b / c
	{
		cout << '\t' << number_1 << " " << operator_1 << " " << number_2 << " " << operator_2 << " " << number_3 << " = ";
		result = number_1 + number_2 / number_3;
		cout << result << endl;
	}
	else if (operator_1 == '-' && operator_2 == '/')  // a - b / c
	{
		cout << '\t' << number_1 << " " << operator_1 << " " << number_2 << " " << operator_2 << " " << number_3 << " = ";
		result = number_1 - number_2 / number_3;
		cout << result << endl;
	}
	else if (operator_1 == '*'&& operator_2 == '*')  // a * b * c
	{
		cout << '\t' << number_1 << " " << operator_1 << " " << number_2 << " " << operator_2 << " " << number_3 << " = ";
		result = number_1 * number_2 * number_3;
		cout << result << endl;
	}
	else if (operator_1 == '/' && operator_2 == '/')  // a / b / c
	{
		cout << '\t' << number_1 << " " << operator_1 << " " << number_2 << " " << operator_2 << " " << number_3 << " = ";
		result = number_1 / number_2 / number_3;
		cout << result << endl;
	}
	else if (operator_1 == '*' && operator_2 == '/')  // a * b / c
	{
		cout << '\t' << number_1 << " " << operator_1 << " " << number_2 << " " << operator_2 << " " << number_3 << " = ";
		result = number_1 * number_2 / number_3;
		cout << result << endl;
	}
	else if (operator_1 == '-' && operator_2 == '/')  // a / b * c
	{
		cout << '\t' << number_1 << " " << operator_1 << " " << number_2 << " " << operator_2 << " " << number_3 << " = ";
		result = number_1 / number_2 * number_3;
		cout << result << endl;
	}
}

void hesablama_2(char op_1, char op_2, float num_1,float num_2, float num_3, float result)
{
	if (op_1 == '*' && op_2 == '+')  // a * (b + c)
	{
		cout << '\t' << num_1 << " " << op_1 << " " << '(' << num_2 << " " << op_2 << " " << num_3 << ')' << " = ";
		result = num_1 * (num_2 + num_3);
		cout << result << endl;
	}
	else if (op_1 == '*' && op_2 == '-')  // a * (b - c)
	{
		cout << '\t' << num_1 << " " << op_1 << " " << '(' << num_2 << " " << op_2 << " " << num_3 << ')' << " = ";
		result = num_1 * (num_2 - num_3);
		cout << result << endl;
	}
	else if ( op_1 == '/' && op_2 == '+')  // a / (b + c)
	{
		cout << '\t' << num_1 << " " << op_1 << " " << '(' << num_2 << " " << op_2 << " " << num_3 << ')' << " = ";
		result = num_1 / (num_2 + num_3);
		cout << result << endl;
	}
	else if ( op_1 == '/' && op_2 == '-')  // a / (b - c)
	{
		cout << '\t' << num_1 << " " << op_1 << " " << '(' << num_2 << " " << op_2 << " " << num_3 << ')' << " = ";
		result = num_1 / (num_2 - num_3);
		cout << result << endl;
	}
}

void hesablama_3(char op_1, char op_2, float num_1, float num_2, float num_3, float result)
{
	if (op_1 == '+' && op_2 == '*')  // (a + b) * c
	{
		cout << '\t' << '(' << num_1 << " " << op_1 << " " << num_2 << ')' << " " << op_2 << " " << num_3 << " = ";
		result = num_1 + (num_2 * num_3);
		cout << result << endl;
	}
	else if (op_1 == '-' && op_2 == '*')  // (a - b) * c
	{
		cout << '\t' << '(' << num_1 << " " << op_1 << " " << num_2 << ')' << " " << op_2 << " " << num_3 << " = ";
		result = num_1 - (num_2 * num_3);
		cout << result << endl;
	}
	else if (op_1 == '+' && op_2 == '/')  // (a + b) / c
	{
		cout << '\t' << '(' << num_1 << " " << op_1 << " " << num_2 << ')' << " " << op_2 << " " << num_3 << " = ";
		result = num_1 + (num_2 / num_3);
		cout << result << endl;
	}
	else if (op_1 == '-' && op_2 == '/')  // (a - b) / c
	{
		cout << '\t' << '(' << num_1 << " " << op_1 << " " << num_2 << ')' << " " << op_2 << " " << num_3 << " = ";
		result = num_1 - (num_2 / num_3);
		cout << result << endl;
	}

}



int main()
{
	int startEnd = 1;
	while (startEnd == 1)
	{
		char line[256] = " My Calculator ";
		int length = strlen(line);
		cout<<"\n\t\t\t\t ";
		for (int i = 0; i < length; i++)
		{
			cout << char(205);
		}
		cout << endl;
		cout << "\t\t\t\t" << char(186) << " My Calculator " << char(186);
		cout << "\n\t\t\t\t ";
		for (int i = 0; i < length; i++)
		{
			cout << char(205);
		}
		cout << endl;
		int select;
		char line2[256] = " My Calculator proqramini  ishe salmaq uchun 1 daxil edin : ";
		int length2 = strlen(line2);
		cout << "\t\t ";
		for (int i = 0; i < length2; i++)
		{
			cout << char(205);
		}
		cout << endl;
		cout << "\t\t" << char(186) << " My Calculator proqramini  ishe salmaq uchun 1 daxil edin : " << char(186);
		cout << "\n\t\t ";
		for (int i = 0; i < length2; i++)
		{
			cout << char(205);
		}
		cout << endl;
		cin >> select;
		system("cls");
		if (select == 1)
		{
			Calculator c;
			int a;
			char line3[256] = " Moterizeler ile emeliyyat aparmaq uchun 1 eks halda 2 daxil edin : ";
			int length3 = strlen(line3);
			cout << "\n\t\t ";
			for (int i = 0; i < length3; i++)
			{
				cout << char(205);
			}
			cout << endl;
			cout << "\t\t" << char(186) << " Moterizeler ile emeliyyat aparmaq uchun 1 eks halda 2 daxil edin : " << char(186);
			cout << "\n\t\t ";
			for (int i = 0; i < length3; i++)
			{
				cout << char(205);
			}
			cout << endl;
			cin >> a;
			system("cls");
			if (a == 2)
			{
				char line4[256] = " 1 -ci Ededi daxil edin : ";
				int length4 = strlen(line4);
				cout << "\t\t ";
				for (int i = 0; i < length4; i++)
				{
					cout << char(205);
				}
				cout << endl;
				cout << "\t\t" << char(186) << " 1 -ci Ededi daxil edin : " << char(186);
				cout << "\n\t\t ";
				for (int i = 0; i < length4; i++)
				{
					cout << char(205);
				}
				cout << endl;
				cin >> c.number_1; system("cls");
				char line5[256] = " Emeliyyat aparmaq uchun bu arifmatik operatorlardan 1 -ni daxil edin - [ + ] , [ - ] , [ * ] , [ / ] : ";
				int length5 = strlen(line5);
				cout << "\t\t ";
				for (int i = 0; i < length5; i++)
				{
					cout << char(205);
				}
				cout << endl;
				cout << "\t\t" << char(186) << " Emeliyyat aparmaq uchun bu arifmatik operatorlardan 1 -ni daxil edin - [ + ] , [ - ] , [ * ] , [ / ] : " << char(186);
				cout << "\n\t\t ";
				for (int i = 0; i < length5; i++)
				{
					cout << char(205);
				}
				cout << endl;
				cin >> c.operator_1; system("cls");
				cout << "\t\t ";
				for (int i = 0; i < length4; i++)
				{
					cout << char(205);
				}
				cout << endl;
				cout << "\t\t" << char(186) << " 2 -ci Ededi daxil edin : " << char(186);
				cout << "\n\t\t ";
				for (int i = 0; i < length4; i++)
				{
					cout << char(205);
				}
				cout << endl;
				cin >> c.number_2; system("cls");
				cout << "\t\t ";
				for (int i = 0; i < length5; i++)
				{
					cout << char(205);
				}
				cout << endl;
				cout << "\t\t" << char(186) << " Emeliyyat aparmaq uchun bu arifmatik operatorlardan 1 -ni daxil edin - [ + ] , [ - ] , [ * ] , [ / ] : " << char(186);
				cout << "\n\t\t ";
				for (int i = 0; i < length5; i++)
				{
					cout << char(205);
				}
				cout << endl;
				cin >> c.operator_2; system("cls");
				cout << "\t\t ";
				for (int i = 0; i < length4; i++)
				{
					cout << char(205);
				}
				cout << endl;
				cout << "\t\t" << char(186) << " 3 -ci Ededi daxil edin : " << char(186);
				cout << "\n\t\t ";
				for (int i = 0; i < length4; i++)
				{
					cout << char(205);
				}
				cout << endl;
				cin >> c.number_3; system("cls");
				hesablama_1(c.number_1, c.number_2, c.number_3, c.operator_1, c.operator_2, c.result);
			}
			else if (a == 1)
			{
				int b; // b=1 olarsa >> a * (b + c) sheklinde | b=2 olarsa  >> (a + b) * c sheklinde hesablama aparilsin 
				char line6[256] = " Eger a * (b + c) sheklinde hesablama aparmaq isteyirsinizse 1 , (a + b) * c sheklinde hesablamaq uchun ise 2 daxil edin : ";
				int length6 = strlen(line6);
				cout << "\t\t ";
				for (int i = 0; i < length6; i++)
				{
					cout << char(205);
				}
				cout << endl;
				cout << "\t\t" << char(186) << " Eger a * (b + c) sheklinde hesablama aparmaq isteyirsinizse 1 , (a + b) * c sheklinde hesablamaq uchun ise 2 daxil edin : " << char(186);
				cout << "\n\t\t ";
				for (int i = 0; i < length6; i++)
				{
					cout << char(205);
				}
				cout << endl;
				cin >> b; system("cls");
				if (b == 1)
				{
					char line4[256] = " 1 -ci Ededi daxil edin : ";
					int length4 = strlen(line4);
					cout << "\t\t ";
					for (int i = 0; i < length4; i++)
					{
						cout << char(205);
					}
					cout << endl;
					cout << "\t\t" << char(186) << " 1 -ci Ededi daxil edin : " << char(186);
					cout << "\n\t\t ";
					for (int i = 0; i < length4; i++)
					{
						cout << char(205);
					}
					cout << endl;
					cin >> c.number_1; system("cls");
					char newLine[256] = " Emeliyyat aparmaq uchun bu arifmatik operatorlardan 1 -ni daxil edin - [ * ] , [ / ] : ";
					int newLength = strlen(newLine);
					cout << "\t\t ";
					for (int i = 0; i < newLength; i++)
					{
						cout << char(205);
					}
					cout << endl;
					cout << "\t\t" << char(186) << " Emeliyyat aparmaq uchun bu arifmatik operatorlardan 1 -ni daxil edin - [ * ] , [ / ] : " << char(186);
					cout << "\n\t\t ";
					for (int i = 0; i < newLength; i++)
					{
						cout << char(205);
					}
					cout << endl;
					cin >> c.operator_1; system("cls");
					cout << "\t\t ";
					for (int i = 0; i < length4; i++)
					{
						cout << char(205);
					}
					cout << endl;
					cout << "\t\t" << char(186) << " 2 -ci Ededi daxil edin : " << char(186);
					cout << "\n\t\t ";
					for (int i = 0; i < length4; i++)
					{
						cout << char(205);
					}
					cout << endl;
					cin >> c.number_2; system("cls");
					cout << "\t\t ";
					char line5[255] = " Emeliyyat aparmaq uchun bu arifmatik operatorlardan 1 -ni daxil edin - [ + ] , [ - ] , [ * ] , [ / ] : ";
					int length5 = strlen(line5);
					for (int i = 0; i < length5; i++)
					{
						cout << char(205);
					}
					cout << endl;
					cout << "\t\t" << char(186) << " Emeliyyat aparmaq uchun bu arifmatik operatorlardan 1 -ni daxil edin - [ + ] , [ - ] , [ * ] , [ / ] : " << char(186);
					cout << "\n\t\t ";
					for (int i = 0; i < length5; i++)
					{
						cout << char(205);
					}
					cout << endl;
					cin >> c.operator_2; system("cls");
					cout << "\t\t ";
					for (int i = 0; i < length4; i++)
					{
						cout << char(205);
					}
					cout << endl;
					cout << "\t\t" << char(186) << " 3 -ci Ededi daxil edin : " << char(186);
					cout << "\n\t\t ";
					for (int i = 0; i < length4; i++)
					{
						cout << char(205);
					}
					cout << endl;
					cin >> c.number_3; system("cls");
					hesablama_2(c.operator_1, c.operator_2, c.number_1, c.number_2, c.number_3, c.result);
				}
				else if (b == 2) //  b=2  >> (a + b) * c 
				{
					char line4[256] = " 1 -ci Ededi daxil edin : ";
					int length4 = strlen(line4);
					cout << "\t\t ";
					for (int i = 0; i < length4; i++)
					{
						cout << char(205);
					}
					cout << endl;
					cout << "\t\t" << char(186) << " 1 -ci Ededi daxil edin : " << char(186);
					cout << "\n\t\t ";
					for (int i = 0; i < length4; i++)
					{
						cout << char(205);
					}
					cout << endl;
					cin >> c.number_1; system("cls");
					char line5[256] = " Emeliyyat aparmaq uchun bu arifmatik operatorlardan 1 -ni daxil edin - [ + ] , [ - ] , [ * ] , [ / ] : ";
					int length5 = strlen(line5);
					cout << "\t\t ";
					for (int i = 0; i < length5; i++)
					{
						cout << char(205);
					}
					cout << endl;
					cout << "\t\t" << char(186) << " Emeliyyat aparmaq uchun bu arifmatik operatorlardan 1 -ni daxil edin - [ + ] , [ - ] , [ * ] , [ / ] : " << char(186);
					cout << "\n\t\t ";
					for (int i = 0; i < length5; i++)
					{
						cout << char(205);
					}
					cout << endl;
					cin >> c.operator_1; system("cls");
					cout << "\t\t ";
					for (int i = 0; i < length4; i++)
					{
						cout << char(205);
					}
					cout << endl;
					cout << "\t\t" << char(186) << " 2 -ci Ededi daxil edin : " << char(186);
					cout << "\n\t\t ";
					for (int i = 0; i < length4; i++)
					{
						cout << char(205);
					}
					cout << endl;
					cin >> c.number_2; system("cls");
					cout << "\t\t ";
					char newline_2 [255] = " Emeliyyat aparmaq uchun bu arifmatik operatorlardan 1 -ni daxil edin - [ * ] , [ / ] : ";
					int newlength_2 = strlen(newline_2);
					for (int i = 0; i < newlength_2; i++)
					{
						cout << char(205);
					}
					cout << endl;
					cout << "\t\t" << char(186) << " Emeliyyat aparmaq uchun bu arifmatik operatorlardan 1 -ni daxil edin - [ * ] , [ / ] : " << char(186);
					cout << "\n\t\t ";
					for (int i = 0; i < newlength_2; i++)
					{
						cout << char(205);
					}
					cout << endl;
					cin >> c.operator_2; system("cls");
					cout << "\t\t ";
					for (int i = 0; i < length4; i++)
					{
						cout << char(205);
					}
					cout << endl;
					cout << "\t\t" << char(186) << " 3 -ci Ededi daxil edin : " << char(186);
					cout << "\n\t\t ";
					for (int i = 0; i < length4; i++)
					{
						cout << char(205);
					}
					cout << endl;
					cin >> c.number_3; system("cls");
					hesablama_3(c.operator_1, c.operator_2, c.number_1, c.number_2, c.number_3, c.result);
				}
			}
		}
		char line7[256] = " Proqrami yeniden bashlatmaq uchun 1, sonlandirmaq uchun ise 2 daxil edin : ";
		int length7 = strlen(line7);
		cout << "\n\n\n\n\t\t ";
		for (int i = 0; i < length7; i++)
		{
			cout << char(205);
		}
		cout << endl;
		cout << "\t\t" << char(186) << " Proqrami yeniden bashlatmaq uchun 1, sonlandirmaq uchun ise 2 daxil edin : " << char(186);
		cout << "\n\t\t ";
		for (int i = 0; i < length7; i++)
		{
			cout << char(205);
		}
		cout << endl;
		cin >> startEnd; system("cls");
		if (startEnd != 1&&startEnd!=2)
		{
			//cout << "Sechim duzgun daxil edilmedi ! ";
			char line8[256] = " Sechim duzgun daxil edilmedi ! ";
			int length8 = strlen(line8);
			cout << "\t\t ";
			for (int i = 0; i < length8; i++)
			{
				cout << char(205);
			}
			cout << endl;
			cout << "\t\t" << char(186) << " Sechim duzgun daxil edilmedi ! " << char(186);
			cout << "\n\t\t ";
			for (int i = 0; i < length8; i++)
			{
				cout << char(205);
			}
			cout << endl;
		}
		else if (startEnd == 2)
		{
			//cout << "Proqram sonlandirildi ! ";
			char line8[256] = " Proqram sonlandirildi ! ";
			int length8 = strlen(line8);
			cout << "\t\t ";
			for (int i = 0; i < length8; i++)
			{
				cout << char(205);
			}
			cout << endl;
			cout << "\t\t" << char(186) << " Proqram sonlandirildi ! " << char(186);
			cout << "\n\t\t ";
			for (int i = 0; i < length8; i++)
			{
				cout << char(205);
			}
			cout << endl;
		}
	}
	

}