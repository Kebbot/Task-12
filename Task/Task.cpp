#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");

	int pizzaID, drinkID, pizzaAmount, drinkAmount, temp;
	float pizzaPrice1, pizzaPrice2, pizzaPrice3,
		pizzaPrice4, selPizPrice;
	float drinkPrice1, drinkPrice2, drinkPrice3,
		selDrPrice;
	float sumOrder;
	pizzaPrice1 = 6.75;
	pizzaPrice2 = 8.95;
	pizzaPrice3 = 14.5;
	pizzaPrice4 = 10.25;
	drinkPrice1 = 1.79;
	drinkPrice2 = 2.5;
	drinkPrice3 = 3.09;

	sumOrder = 0;

	cout << "Выберите пиццу:\n";
	cout << "1 — Пицца 4 Сыра $" << pizzaPrice1 << "\n";
	cout << "2 — Гавайская Пицца $" << pizzaPrice2 << "\n";
	cout << "3 — Пеперони Пицца $" << pizzaPrice3 << "\n";
	cout << "4 — Пицца с Ананасами $" << pizzaPrice4 << "\n";
	cin >> pizzaID;
	cout << "Введите количество выбранных пицц:\n";
	cin >> pizzaAmount;

	cout << "Выберите напиток:\n";
	cout << "1 — Пепса (0.2л) $" << drinkPrice1 << "\n";
	cout << "2 — Минералка (0.2л) $" << drinkPrice2 << "\n";
	cout << "3 — Сок апельсиновый (1л) $" << drinkPrice3 << "\n";
	cin >> drinkID;
	cout << "Введите количество напитков:\n";
	cin >> drinkAmount;
	switch (pizzaID)
	{
	case 1:
		selPizPrice = pizzaPrice1;
		break;
	case 2:
		selPizPrice = pizzaPrice2;
		break;
	case 3:
		selPizPrice = pizzaPrice3;
		break;
	case 4:
		selPizPrice = pizzaPrice4;
		break;
	default:
		cout << "Введен не верный идентификатор пиццы\n";
		selPizPrice = 0;
		break;
	}
	switch (drinkID)
	{
	case 1:
		selDrPrice = drinkPrice1;
		break;
	case 2:
		selDrPrice = drinkPrice2;
		break;
	case 3:
		selDrPrice = drinkPrice3;
		break;
	default:
		cout << "Введен не верный идентификатор напитка\n";
		break;
	}
	temp = pizzaAmount;
	if (pizzaAmount >= 5)
	{
		cout << "Суппер скидка для ВАС!! Каждая 5-я Пицца бесплатно!!\n";
		pizzaAmount = pizzaAmount - pizzaAmount / 5;
	}
	sumOrder = sumOrder + pizzaAmount * selPizPrice;
	if ((drinkAmount >= 3) && (selDrPrice > 2))
	{
		cout << "Вы получаете скидку в 15% на напитки (отдельно)\n";
		sumOrder = sumOrder + drinkAmount * selDrPrice * (1 - 0 / 15);
	}
	else
	{
		sumOrder = sumOrder + drinkAmount * selDrPrice;
	}
	if (sumOrder > 50)
	{
		cout << "Вы получили скидку в 20% на весь заказ!\n";
		sumOrder = sumOrder * (1 - 0.2);
	}
	cout << "Your order:\n";
	cout << "Пицца" << pizzaID << "-" << temp << "-$";
	cout << selPizPrice << "\n";
	cout << "Напиток" << drinkID << "-";
	cout << drinkAmount << "-$" << selDrPrice << "\n";
	cout << "Сумма: $" << sumOrder << "\n";
	cout << "Приятного аппетита! Ждем Вас снова!";
	return 0;
}
