#pragma once

namespace Calc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnClose;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnReset;
	private: System::Windows::Forms::Button^ btnUmn;
	private: System::Windows::Forms::Button^ btnDel;
	protected:




	private: System::Windows::Forms::Button^ btnMinus;
	private: System::Windows::Forms::Label^ lblOper;
	private: System::Windows::Forms::Label^ lbl1;
	private: System::Windows::Forms::Label^ lbl2;
	private: System::Windows::Forms::Label^ lbl3;
	private: System::Windows::Forms::TextBox^ txt1;
	private: System::Windows::Forms::TextBox^ txt2;
	private: System::Windows::Forms::TextBox^ txtResult;


	private: System::Windows::Forms::Label^ lblMistake;






	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnUmn = (gcnew System::Windows::Forms::Button());
			this->btnDel = (gcnew System::Windows::Forms::Button());
			this->btnMinus = (gcnew System::Windows::Forms::Button());
			this->lblOper = (gcnew System::Windows::Forms::Label());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->lbl2 = (gcnew System::Windows::Forms::Label());
			this->lbl3 = (gcnew System::Windows::Forms::Label());
			this->txt1 = (gcnew System::Windows::Forms::TextBox());
			this->txt2 = (gcnew System::Windows::Forms::TextBox());
			this->txtResult = (gcnew System::Windows::Forms::TextBox());
			this->lblMistake = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnClose
			// 
			this->btnClose->Location = System::Drawing::Point(240, 185);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(100, 30);
			this->btnClose->TabIndex = 0;
			this->btnClose->Text = L"Закрыть";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &MyForm::btnClose_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(240, 10);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(100, 30);
			this->btnAdd->TabIndex = 1;
			this->btnAdd->Text = L"Сложить";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MyForm::btnAdd_Click);
			// 
			// btnReset
			// 
			this->btnReset->Location = System::Drawing::Point(240, 150);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(100, 30);
			this->btnReset->TabIndex = 2;
			this->btnReset->Text = L"Сброс";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &MyForm::btnReset_Click);
			// 
			// btnUmn
			// 
			this->btnUmn->Location = System::Drawing::Point(240, 80);
			this->btnUmn->Name = L"btnUmn";
			this->btnUmn->Size = System::Drawing::Size(100, 30);
			this->btnUmn->TabIndex = 3;
			this->btnUmn->Text = L"Умножить";
			this->btnUmn->UseVisualStyleBackColor = true;
			this->btnUmn->Click += gcnew System::EventHandler(this, &MyForm::btnUmn_Click);
			// 
			// btnDel
			// 
			this->btnDel->Location = System::Drawing::Point(240, 115);
			this->btnDel->Name = L"btnDel";
			this->btnDel->Size = System::Drawing::Size(100, 30);
			this->btnDel->TabIndex = 4;
			this->btnDel->Text = L"Разделить";
			this->btnDel->UseVisualStyleBackColor = true;
			this->btnDel->Click += gcnew System::EventHandler(this, &MyForm::btnDel_Click);
			// 
			// btnMinus
			// 
			this->btnMinus->Location = System::Drawing::Point(240, 45);
			this->btnMinus->Name = L"btnMinus";
			this->btnMinus->Size = System::Drawing::Size(100, 30);
			this->btnMinus->TabIndex = 5;
			this->btnMinus->Text = L"Вычесть";
			this->btnMinus->UseVisualStyleBackColor = true;
			this->btnMinus->Click += gcnew System::EventHandler(this, &MyForm::btnMinus_Click);
			// 
			// lblOper
			// 
			this->lblOper->AutoSize = true;
			this->lblOper->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblOper->Location = System::Drawing::Point(110, 10);
			this->lblOper->Name = L"lblOper";
			this->lblOper->Size = System::Drawing::Size(0, 16);
			this->lblOper->TabIndex = 6;
			this->lblOper->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbl1->Location = System::Drawing::Point(10, 60);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(106, 15);
			this->lbl1->TabIndex = 7;
			this->lbl1->Text = L"Первое число:";
			this->lbl1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lbl2
			// 
			this->lbl2->AutoSize = true;
			this->lbl2->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbl2->Location = System::Drawing::Point(10, 90);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(104, 15);
			this->lbl2->TabIndex = 8;
			this->lbl2->Text = L"Второе число:";
			this->lbl2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lbl3
			// 
			this->lbl3->AutoSize = true;
			this->lbl3->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbl3->Location = System::Drawing::Point(10, 120);
			this->lbl3->Name = L"lbl3";
			this->lbl3->Size = System::Drawing::Size(80, 15);
			this->lbl3->TabIndex = 9;
			this->lbl3->Text = L"Результат:";
			// 
			// txt1
			// 
			this->txt1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txt1->Location = System::Drawing::Point(115, 60);
			this->txt1->Name = L"txt1";
			this->txt1->Size = System::Drawing::Size(90, 21);
			this->txt1->TabIndex = 10;
			this->txt1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txt1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::txt1_MouseClick);
			this->txt1->TextChanged += gcnew System::EventHandler(this, &MyForm::txt1_TextChanged);
			this->txt1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txt1_KeyPress);
			// 
			// txt2
			// 
			this->txt2->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txt2->Location = System::Drawing::Point(115, 90);
			this->txt2->Name = L"txt2";
			this->txt2->Size = System::Drawing::Size(90, 21);
			this->txt2->TabIndex = 11;
			this->txt2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txt2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::txt2_MouseClick);
			this->txt2->TextChanged += gcnew System::EventHandler(this, &MyForm::txt2_TextChanged);
			this->txt2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txt2_KeyPress);
			// 
			// txtResult
			// 
			this->txtResult->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtResult->Location = System::Drawing::Point(115, 120);
			this->txtResult->Name = L"txtResult";
			this->txtResult->ReadOnly = true;
			this->txtResult->Size = System::Drawing::Size(90, 21);
			this->txtResult->TabIndex = 12;
			this->txtResult->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtResult->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtResult_KeyPress);
			// 
			// lblMistake
			// 
			this->lblMistake->AutoSize = true;
			this->lblMistake->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblMistake->ForeColor = System::Drawing::Color::Red;
			this->lblMistake->Location = System::Drawing::Point(12, 167);
			this->lblMistake->Name = L"lblMistake";
			this->lblMistake->Size = System::Drawing::Size(0, 13);
			this->lblMistake->TabIndex = 13;
			this->lblMistake->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(344, 221);
			this->Controls->Add(this->lblMistake);
			this->Controls->Add(this->txtResult);
			this->Controls->Add(this->txt2);
			this->Controls->Add(this->txt1);
			this->Controls->Add(this->lbl3);
			this->Controls->Add(this->lbl2);
			this->Controls->Add(this->lbl1);
			this->Controls->Add(this->lblOper);
			this->Controls->Add(this->btnMinus);
			this->Controls->Add(this->btnDel);
			this->Controls->Add(this->btnUmn);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btnClose);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Calc";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	double k1, k2, k3; //k1 - первое число, k2 - второе число, k3 - результат
	//Блок операции сложения
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		this->txtResult->Text = L""; //Очищаем поле результата перед началом работы
		this->lblMistake->Text = L"";
		this->lblOper->Text = L"Сложение"; //Выводим навание операции - "Сложение"
		if (txt1->Text->Length == 0 && txt2->Text->Length == 0) /*Если количество символов в обоих TextBox равно нулю, то
			выводим "введите значения"*/ 
			this->lblMistake->Text = L"Введите значения.";
		else if (txt1->Text->Length == 0) /*Если количество символов в первом TextBox равно нулю, то
			выводим "Введите число №1."*/ 
			this->lblMistake->Text = L"Введите число №1.";
		else if (txt2->Text->Length == 0)/*Если количество символов во втором TextBox равно нулю, то
			выводим "Введите число №2."*/ 
			this->lblMistake->Text = L"Введите число №2.";
		else { //Если все числа введены то выполняется 
			k1 = Convert::ToDouble(txt1->Text); //Считываем первое число, конвертирует в тип double
			k2 = Convert::ToDouble(txt2->Text); //Считываем второе число, конвертирует в тип double
			k3 = k1 + k2; //Выполняем сложение
			this->txtResult->Text = Convert::ToString(k3);//Вывовыдим результут в формате string
		}
	}
	//Блок для кнопки "Сброс"
	private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
		this->lblOper->Text = L""; //Очищаем надпись сверху
		this->txt1->Text = L""; //Очищием первый TextBox
		this->txt2->Text = L""; //Очищаем второй TextBox
		this->txtResult->Text = L""; //Очищаем TextBox с результатом
		this->lblMistake->Text = L""; //Очищаем надпись с ошибкой
	}

	//Очищаем результат если пользователь изменяет первое число
	private: System::Void txt1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		this->txtResult->Text = L"";
		this->lblOper->Text = L"";
	}
	
	//Очищаем результат если пользователь изменяет второе число
	private: System::Void txt2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		this->txtResult->Text = L"";
		this->lblOper->Text = L"";
	}

	//Блок операции вычетания
	private: System::Void btnMinus_Click(System::Object^ sender, System::EventArgs^ e) {
		this->txtResult->Text = L"";//Очищаем поле результата перед началом работы
		this->lblMistake->Text = L"";
		this->lblOper->Text = L"Вычитание";//Выводим навание операции - "Сложение"
		if (txt1->Text->Length == 0 && txt2->Text->Length == 0)/*Если количество символов в обоих TextBox равно нулю, то
		выводим "введите значения" */
			this->lblMistake->Text = L"Введите значения.";
		else if (txt1->Text->Length == 0) /*Если количество символов в первом TextBox равно нулю, то
		выводим "Введите число №1."*/
			this->lblMistake->Text = L"Введите число №1.";
		else if (txt2->Text->Length == 0) /*Если количество символов во втором TextBox равно нулю,
			то	выводим "Введите число №2."*/ 
			this->lblMistake->Text = L"Введите число №2";
		else {//Если все числа введены то выполняется 
			k1 = Convert::ToDouble(txt1->Text);//Считываем первое число, конвертирует в тип double
			k2 = Convert::ToDouble(txt2->Text);//Считываем второе число, конвертирует в тип double
			k3 = k1 - k2; //Выполняем вычитание
			this->txtResult->Text = Convert::ToString(k3);//Вывовыдим результут в формате string

		}
	}
	
	//Блок операции "Уножение"
	private: System::Void btnUmn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->txtResult->Text = L""; //Очищаем поле результата перед началом работы
		this->lblMistake->Text = L"";
		this->lblOper->Text = L"Умножение";//Выводим навание операции - "Умножение"
		if (txt1->Text->Length == 0 && txt2->Text->Length == 0)/*Если количество символов в обоих TextBox равно нулю, то
		выводим "введите значения" */
			this->lblMistake->Text = L"Введите значения.";
		else if (txt1->Text->Length == 0)/*Если количество символов в первом TextBox равно нулю, то
		выводим "Введите число №1."*/
			this->lblMistake->Text = L"Введите число №1.";
		else if (txt2->Text->Length == 0)/*Если количество символов во втором TextBox равно нулю,
		то	выводим "Введите число №2."*/ 
			this->lblMistake->Text = L"Введите число №2.";
		else {//Если все числа введены то выполняется
			k1 = Convert::ToDouble(txt1->Text);//Считываем первое число, конвертирует в тип double
			k2 = Convert::ToDouble(txt2->Text);//Считываем второе число, конвертирует в тип double
			k3 = k1 * k2;//Выполняем умножение
			this->txtResult->Text = Convert::ToString(k3); // Вывовыдим результут в формате string
		}
	}
	private: System::Void btnDel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->txtResult->Text = L""; //Очищаем поле результата перед началом работы
		this->lblMistake->Text = L"";
		this->lblOper->Text = L"Деление";//Выводим навание операции - "Деление"

		if (txt1->Text->Length == 0 && txt2->Text->Length == 0)/*Если количество символов в обоих TextBox равно нулю, то
		выводим "введите значения" */
			this->lblMistake->Text = L"Введите значения.";
		else if (txt1->Text->Length == 0)/*Если количество символов в первом TextBox равно нулю, то
		выводим "Введите число №1."*/
			this->lblMistake->Text = L"Введите число №1.";
		else if (txt2->Text->Length == 0)/*Если количество символов во втором TextBox равно нулю,
		то	выводим "Введите число №2."*/
			this->lblMistake->Text = L"Введите число №2.";
		else {//Если все числа введены то выполняется
			k1 = Convert::ToDouble(txt1->Text);//Считываем первое число, конвертирует в тип double
			k2 = Convert::ToDouble(txt2->Text);//Считываем второе число, конвертирует в тип double
			if (k2 == 0) {//Проверяем равно ли нулю второе число
				this->lblMistake->Text = L"Ошибка! На ноль делить нельзя."; //Если 2 число равно нуль, то выводим текст ошибки
			}
			else {
				k3 = k1 / k2;//Выполняем операцию деления
				this->txtResult->Text = Convert::ToString(k3);// Вывовыдим результут в формате string
			}
		}
	}

	private: System::Void txt1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->lblMistake->Text = L"";//При исправлении ошибки, убираем её текст
	}
	private: System::Void txt2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->lblMistake->Text = L"";//При исправлении ошибки, убираем её текст
	}

	private: System::Void txt1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if ((e->KeyChar != 44) && (e->KeyChar != 8) && ((e->KeyChar <= 47) || (e->KeyChar >= 58)) && (e->KeyChar != 45)) {
			e->Handled = true;//Блок запрета на введение символов кроме цифр и запятой в первом TextBox
		}
		if (this->txt1->Text->Length == 0) {
			if (e->KeyChar == ',') { //Если пользователь ввёл в txt1 только ',' то меняем её на '0,'
				this->txt1->Text = "0,";
				this->txt1->SelectionStart += 2;
			}
		}
		//Если пользователь ввёл '-,' исправляем на '-0,'
		if (this->txt1->Text->Length == 1) {
			if (this->txt1->Text == "-") {
				if(e->KeyChar == ',') {
					this->txt1->Text = "-0,";
					this->txt1->SelectionStart += 3;
				}
			}
		}

		//Если первое число 0 меняем на следующее
		if ((this->txt1->Text->Length == 1) && (this->txt1->Text == "0")) {
			if (((e->KeyChar >= '0') || (e->KeyChar <= '9')) && (e->KeyChar != ',')) {
				this->txt1->Text = Convert::ToString(e->KeyChar);
				this->txt1->SelectionStart += 1;
				e->Handled = true;

			}
		}

		//Если первое число -0 ноль убираем и меняем на следующее с сохранением минуса
		if ((this->txt1->Text->Length == 2) && (this->txt1->Text == "-0")) {
			if ((e->KeyChar >= '0') || (e->KeyChar <= '9') && (e->KeyChar != ',')) {
				this->txt1->Text = Convert::ToString("-" + e->KeyChar);
				this->txt1->SelectionStart += 2;
				e->Handled = true;
			}
		}

		//не даёт писать запятую в середине числа если одна уже есть
		if ((this->txt1->Text->Length >= 1) && (this->txt1->Text->Contains(",")) && (e->KeyChar == ',')) {
			e->Handled = true;
		}
		//недаёт писать минус в середине если один уже есть
		if ((this->txt1->Text->Length >= 1) && (this->txt1->Text->Contains("-")) && (e->KeyChar == '-')) {
			e->Handled = true;
		}
		//Если пользователь ввёл минус в середине числа выводится сообщение об ошибке
		if ((this->txt1->Text->Length >= 1) && (!this->txt1->Text->Contains("-")) && (e->KeyChar == '-')) {
			if(this->txt1->SelectionStart == 0)//если вернулся и поставил минус вначале
				this->lblMistake->Text = L"";
			else
				this->lblMistake->Text = L"Ошибка!Некорректный ввод.";
		}
	
		//Если пользователь исправил ошибку с некоректным вводом
		if (e->KeyChar == 8) {
			this->lblMistake->Text = L"";
		}
	}
	
	private: System::Void txt2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if ((e->KeyChar != 44) && (e->KeyChar != 8) && ((e->KeyChar <= 47) || (e->KeyChar >= 58)) && (e->KeyChar != 45))
			e->Handled = true;//Блок запрета на введение символов кроме цифр и запятой во второй TextBox
		if (this->txt2->Text->Length == 0) {
			if (e->KeyChar == ',') {//Если пользователь ввёл в txt2 только ',' то меняем её на '0,'
				this->txt2->Text = "0,";
				this->txt2->SelectionStart += 2;
			}
		}

		//Если первое число 0 меняем на следующее
		if ((this->txt2->Text->Length == 1) && (this->txt2->Text == "0")) {
			if ((e->KeyChar >= '0') && (e->KeyChar <= '9')) {
				this->txt2->Text = Convert::ToString(e->KeyChar);
				this->txt2->SelectionStart += 1;
				e->Handled = true;
			}
		}

		//Если пользователь ввёл '-,' исправляем на '-0,'
		if (this->txt2->Text->Length == 1) {
			if (this->txt2->Text == "-") {
				if (e->KeyChar == ',') {
					this->txt2->Text = "-0,";
					this->txt2->SelectionStart += 3;
				}
			}
		}


		//Если первое число -0, ноль убираем и меняем на следующее с сохранением минуса
		if ((this->txt2->Text->Length == 2) && (this->txt2->Text == "-0")) {
			if ((e->KeyChar >= '0') || (e->KeyChar <= '9') && (e->KeyChar != ',')) {
				this->txt2->Text = Convert::ToString("-" + e->KeyChar);
				this->txt2->SelectionStart += 2;
				e->Handled = true;
			}
		}

		//не даёт писать запятую в середине числа если одна уже есть
		if ((this->txt2->Text->Length >= 1) && (this->txt2->Text->Contains(",")) && (e->KeyChar == ',')) {
			e->Handled = true;
		}
		//недаёт писать минус в середине если один уже есть
		if ((this->txt2->Text->Length >= 1) && (this->txt2->Text->Contains("-")) && (e->KeyChar == '-')) {
			e->Handled = true;
		}
		//Если пользователь ввёл минус в середине числа выводится сообщение об ошибке
		if ((this->txt2->Text->Length >= 1) && (!this->txt2->Text->Contains("-")) && (e->KeyChar == '-')) {
			if (this->txt2->SelectionStart == 0)//если вернулся и поставил минус вначале
				this->lblMistake->Text = L"";
			else
				this->lblMistake->Text = L"Ошибка!Некорректный ввод.";
		}

		//Если пользователь исправил ошибку с некоректным вводом
		if (e->KeyChar == 8) {
			this->lblMistake->Text = L"";
		}
	}
	// Блок запрета на введение символов кроме цифр 
	private: System::Void txtResult_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if ((e->KeyChar != 44) && (e->KeyChar != 8))
			e->Handled = true;
	}
};
}
