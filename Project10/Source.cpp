#include"MainForm.h"
forgetPassword obj1;
modifyAbout obj2;
WritePost obj3;
std::string locationDetect(MainForm^ ptr);
//string tempProfilePic(MainForm^ ptr);
void setAfterProfilePic(MainForm^ ptr);
std::string reLocation(MainForm^ ptr);
System::Void MainForm::pictureBox60_Click(System::Object^  sender, System::EventArgs^  e) {
	//location show
	comboBox6->Show();
	label73->Hide();
	comboBox6->Enabled = true;
	//std::string a=locationDetect(this);
}
System::Void MainForm::button12_Click(System::Object^  sender, System::EventArgs^  e) {
	//post the timeline final
	obj3.post(this);
}
System::Void MainForm::button3_Click(System::Object^  sender, System::EventArgs^  e) {
	//done button
	if (textBox8->Text == "" || textBox9->Text == "" ||
		textBox10->Text == "" || textBox8->Text == "UserID"
		|| textBox9->Text == "dd/mm/yyyy" || textBox10->Text == "Answer ..." || comboBox2->Text == "")
	{
		MessageBox::Show("Type Email, DOB and Security Answer");
	}
	else if (comboBox2->Text == "Security Question?") {
		MessageBox::Show("Select one Security Question");
	}
	else {
		String^ a = textBox8->Text;
		std::string b = msclr::interop::marshal_as<std::string>(a);
		std::ifstream out;
		out.open("register.txt");
		std::string name;
		std::string email;
		std::string pass;
		std::string u;
		//bool check = false;
		out >> name;
		out >> email;
		//getline(out, pass, '%');
		out >> pass;
		getline(out, u);
		while (!out.eof())
		{
			
			if (email == b)
			{
				button4->Show();
				label20->Show();
				button5->Show();
				textBox11->Show();
				
			}
			/*else {
				check = true;
				break;
			}*/
			//if (check == true) { break; }
			out >> name;
			out >> email;
			out >> pass;
			getline(out, u);

		}
	}
	
}
System::Void MainForm::button4_Click(System::Object^  sender, System::EventArgs^  e) {
	obj1.fp(this);    //forget password
}
System::Void MainForm::pictureBox45_Click(System::Object^  sender, System::EventArgs^  e) {
	label51->Hide();
	label52->Hide();
	label53->Hide();
	label54->Hide();
	label60->Hide();
	label61->Hide();
	label62->Hide();
	label63->Hide();
	label64->Hide();
	textBox14->Hide();
	textBox14->Text = "";
	textBox15->Hide();
	textBox15->Text = "";
	comboBox3->Hide();
	comboBox3->Text = "---";
	pictureBox45->Hide();
	pictureBox46->Hide();
	pictureBox41->Show();
}
System::Void MainForm::label61_Click(System::Object^  sender, System::EventArgs^  e) {
	obj2.modDob(this);
	textBox15->Show();   //dob
	label60->Hide();
	label51->Show();
	label61->Hide();
	
}
System::Void MainForm::label63_Click(System::Object^  sender, System::EventArgs^  e) {
	obj2.modPhone(this);
	textBox14->Show();    //phone
	label54->Hide();
	label52->Show();
	label63->Hide();
	
}
System::Void MainForm::label64_Click(System::Object^  sender, System::EventArgs^  e) {
	obj2.modLocation(this);
	comboBox3->Show();    //address
	label62->Hide();
	label53->Show();
	label64->Hide();
	
}

std::string reLocation(MainForm^ ptr) {
	String^ str;
	ptr->label73->Hide();
	if (ptr->comboBox6->Text == "") {
		ptr->comboBox6->Text = "";
		ptr->label73->Text = "";
		std::string ju = "";
		str = gcnew String(ju.c_str());
		return ju;
	}
	else {
		str = ptr->comboBox6->SelectedItem->ToString();
		std::string lo = msclr::interop::marshal_as<std::string>(str);
		return lo;
	}
	
}
std::string locationDetect(MainForm^ ptr) {
	std::string lo = reLocation(ptr);
	//String^ str;
	/*str = ptr->comboBox6->Text;
	std::string lo= msclr::interop::marshal_as<std::string>(str);*/
	String^ str2;
	str2 = ptr->label46->Text;
	std::string user = msclr::interop::marshal_as<std::string>(str2);
	if (ptr->comboBox6->Text != "" || ptr->comboBox6->Text != "\0") {
		ptr->comboBox6->Show();
	}
	else {
		ptr->comboBox6->Hide();
	}
	if (lo == "") {
		std::string abc = "";
		return abc;
	}
	else {
		std::string a = " --" + user + " is at " + lo;
		String^ str3 = gcnew String(a.c_str());
		ptr->label73->Text = str3;
		ptr->label73->Show();
		str3 = ptr->label73->Text;
		std::string re = msclr::interop::marshal_as<std::string>(str3);
		Sleep(500);
		return re;
	}
}
int checkProfilePicFile(std::string &fName) {
	std::string s;
	int sTotal = 0;

	std::ifstream in;
	in.open("profilePic.txt");

	while (!in.eof()) {
		getline(in, s);
		sTotal++;
	}
	in.close();
	return sTotal;
}

int checkLines(std::string &fName) {
	std::string s;
	int sTotal = 0;

	std::ifstream in;
	in.open("register.txt");

	while (!in.eof()) {
		getline(in, s);
		sTotal++;
	}
	in.close();
	return sTotal;
}
int checkLinesAbout(std::string &fName) {
	std::string s;
	int sTotal = 0;

	std::ifstream in;
	in.open("about.txt");

	while (!in.eof()) {
		getline(in, s);
		sTotal++;
	}
	in.close();
	return sTotal;
}
void forgetPassword::fp(MainForm^ ptr) {
	if (ptr->textBox8->Text == "" || ptr->textBox9->Text == "" ||
		ptr->textBox10->Text == "" || ptr->textBox8->Text == "Email"
		|| ptr->textBox9->Text == "dd/mm/yyyy" || ptr->textBox10->Text == "Answer ..." || ptr->comboBox2->Text == ""
		|| ptr->textBox11->Text == "" || ptr->textBox11->Text == "Password")
	{
		MessageBox::Show("Type Email, DOB and Security Answer");
	}
	else if (ptr->comboBox2->Text == "Security Question?") {
		MessageBox::Show("Select one Security Question");
	}
	else 
	{
		///////////////////////////////////////////////////////////

		//String^ a = ptr->textBox8->Text;
		//string b = msclr::interop::marshal_as<string>(a);
		//ifstream read;
		//ofstream in;
		//read.open("register.txt");
		//in.open("temp.txt");
		//String^ str1; String^ str2;
		////String^ str2;
		//string name;
		//string email;
		//string pass;
		//string breaker;
		//string dob;
		//string sq;
		//string ans;
		//string end;
		//read >> name;
		//read >> email;
		//read >> pass;
		////pass2 = pass;
		//read >> breaker;
		//read >> dob;
		////getline(read, dob, ' ');
		////read >> sq;
		//getline(read, sq, '?');
		//read >> ans;
		//getline(read, end, '.');

		////cout << name << "\n" << email << "\n" << pass << "\n" << breaker << "\n" << dob << "\n" << sq << "\n" << ans << endl;
		//while (!read.eof()) {
		//	//read >> name;
		//	//read >> email;
		//	//read >> pass;
		//	//read >> breaker;
		//	//read >> dob;
		//	////getline(read, dob, ' ');
		//	////read >> sq;
		//	//getline(read, sq, '?');
		//	//read >> ans;
		//	//getline(read, end, '.');
		//	if (b == email) {
		//		str1 = gcnew String(ans.c_str());
		//		str2 = gcnew String(dob.c_str());
		//		if (str1 == ptr->textBox10->Text&&str2 == ptr->textBox9->Text) {
		//			String^ x = ptr->textBox11->Text;
		//			string y = msclr::interop::marshal_as<string>(x);

		//			in << name;
		//			in << " ";
		//			in << email;
		//			in << " ";
		//			in << y;
		//			in << " % ";
		//			in << dob;
		//			//in << " ";
		//			in << sq;
		//			in << "? ";
		//			in << ans;
		//			in << " .\n";
		//			in.close();



		//		}
		//		else {
		//			MessageBox::Show("Incorrect DOB & Security Answer");
		//		}

		//	}

		//	in << name;
		//	in << " ";
		//	in << email;
		//	in << " ";
		//	in << pass;
		//	in << " % ";
		//	in << dob;
		//	//in << " ";
		//	in << sq;
		//	in << "? ";
		//	in << ans;
		//	in << " .\n";
		//	read >> name;
		//	read >> email;
		//	read >> pass;
		//	read >> breaker;
		//	read >> dob;
		//	getline(read, sq, '?');
		//	read >> ans;
		//	getline(read, end, '.');
		//
		//	read.close();
		//	in.close();
		//	remove("register.txt");
		//	rename("temp.txt", "register.txt");
		//	MessageBox::Show("Password Changed Successfully");
		//}


   
//////////////////////////////////////////////////////////////////////
        std::string fName = "register.txt";
		int lines = checkLines(fName);//checkLines(fName);
		String^ a = ptr->textBox8->Text;
		std::string b = msclr::interop::marshal_as<std::string>(a);
		std::ifstream read;
		std::ofstream in;
		read.open("register.txt");
		in.open("temp.txt");
		String^ str1; String^ str2;
		//String^ str2;
		std::string *n, *e, *p, *br, *dOb, *sQ, *ANS,*End;
		n = new std::string[lines];
		e = new std::string[lines];
		p = new std::string[lines];
		br = new std::string[lines];
		dOb = new std::string[lines];
		sQ = new std::string[lines];
		ANS = new std::string[lines];
		End = new std::string[lines];
		std::string name;
		std::string email;
		std::string pass;
		std::string breaker;
		std::string dob;
		std::string sq;
		std::string ans;
		std::string end;
		//read >> name;
		//read >> email;
		//read >> pass;
		////pass2 = pass;
		//read >> breaker;
		//read >> dob;
		////getline(read, dob, ' ');
		////read >> sq;
		//getline(read, sq, '?');
		//read >> ans;
		//getline(read, end, '.');
		for (int i = 0; i < lines; i++)
		{
			if (i == lines-1) {
				in << n[lines - 1];
				in << " ";
				in << e[lines - 1];
				in << " ";
				in << pass;
				in << " % ";
				in << dOb[lines - 1];
				//in << " ";
				in << sQ[lines - 1];
				in << "? ";
				in << ANS[lines - 1];
				in << " .\n";
				read.close();
				in.close();
				remove("register.txt");
				rename("temp.txt", "register.txt");
				MessageBox::Show("Password Changed Successfully");
				ptr->panel4->Location = Point(699, 25);
				while (ptr->panel4->Location.X != 962) {
					ptr->panel4->Location = Point(ptr->panel4->Location.X + 1, 25);
					//System::Threading::Thread::Sleep(1);
					Sleep(0.5);
				}
			}
			read >> n[i];
			read >> e[i];
			read >> p[i];
			read >> br[i];
			read >> dOb[i];
			getline(read, sQ[i], '?');
			read >> ANS[i];
			getline(read, End[i], '.');
			if ( e[i]== b) {
				str1 = gcnew String(ANS[i].c_str());
				str2 = gcnew String(dOb[i].c_str());
				if (str1 == ptr->textBox10->Text&&str2 == ptr->textBox9->Text) {
					String^ x = ptr->textBox11->Text;
					std::string y = msclr::interop::marshal_as<std::string>(x);

					n[lines - 1] = n[i];
					
					e[lines - 1] = e[i];
					
					pass= y;
					
					dOb[lines - 1] = dOb[i];
					
					sQ[lines - 1] = sQ[i];
					
					ANS[lines - 1] = ANS[i];
					
					//in.close();



				}
				else {
					MessageBox::Show("Incorrect DOB & Security Answer");
				}

			}
			else {
				in << n[i];
				in << " ";
				in << e[i];
				in << " ";
				in << p[i];
				in << " % ";
				in << dOb[i];
				//in << " ";
				in << sQ[i];
				in << "? ";
				in << ANS[i];
				in << " .\n";
				/*read >> n[i];
				read >> e[i];
				read >> p[i];
				read >> br[i];
				read >> dOb[i];
				getline(read, sQ[i], '?');
				read >> ANS[i];
				getline(read, End[i], '.');*/
			}
			
		}
		/*delete n; delete e; delete p;
		delete br; delete dOb;
		delete sQ; delete ANS;delete End;*/
	}
	
}

void copyDOB(std::string DoB, MainForm^ ptr) {

	std::string fName = "register.txt";
	int lines = checkLines(fName);
	String^ a = ptr->textBox1->Text;
	std::string b = msclr::interop::marshal_as<std::string>(a);
	std::ifstream read;
	std::ofstream in;
	read.open("register.txt");
	in.open("temp.txt");
	String^ str1; String^ str2;
	std::string *n, *e, *p, *br, *dOb, *sQ, *ANS, *End;
	n = new std::string[lines];
	e = new std::string[lines];
	p = new std::string[lines];
	br = new std::string[lines];
	dOb = new std::string[lines];
	sQ = new std::string[lines];
	ANS = new std::string[lines];
	End = new std::string[lines];
	
	for (int i = 0; i < lines; i++)
	{
		if (i == lines-1) {
			in << n[lines - 1];
			in << " ";
			in << e[lines - 1];
			in << " ";
			in << p[lines - 1];
			in << " % ";
			in << dOb[lines - 1];
			//in << " ";
			in << sQ[lines - 1];
			in << "? ";
			in << ANS[lines - 1];
			in << " .\n";
			read.close();
			in.close();
			remove("register.txt");
			rename("temp.txt", "register.txt");
		}
		read >> n[i];
		read >> e[i];
		read >> p[i];
		read >> br[i];
		read >> dOb[i];
		getline(read, sQ[i], '?');
		read >> ANS[i];
		getline(read, End[i], '.');
		if (e[i] == b) {

			n[lines - 1] = n[i];

			e[lines - 1] = e[i];

			p[lines - 1] = p[i];

			dOb[lines - 1] = DoB;

			sQ[lines - 1] = sQ[i];

			ANS[lines - 1] = ANS[i];

			//in.close();



		}
			

		
		else {
			in << n[i];
			in << " ";
			in << e[i];
			in << " ";
			in << p[i];
			in << " % ";
			in << dOb[i];
			//in << " ";
			in << sQ[i];
			in << "? ";
			in << ANS[i];
			in << " .\n";
			
		}

	}

}
std::string previousDate(MainForm^ ptr, std::string b) {
	std::ifstream out;
	out.open("register.txt");
	String^ str3;
	std::string name;
	std::string email, FINAL;
	std::string pass, u, br, dob;
	out >> name;
	out >> email;
	out >> pass;
	out >> br;
	out >> dob;
	getline(out, u);
	while (!out.eof())
	{
		if (email == b)
		{
			str3 = gcnew String(dob.c_str());
			ptr->label44->Text = str3;
			FINAL = dob;
			break;
		}


		out >> name;
		out >> email;
		out >> pass;
		out >> br;
		out >> dob;
		getline(out, u);

	}
	return FINAL;
}

std::string previousPhone(MainForm^ ptr, std::string b) {
	std::ifstream out;
	out.open("about.txt");
	std::string name;
	std::string email, FINAL,ph;
	std::string  u, dob;
	out >> name;
	out >> email;
	out >> ph;
	out >> dob;
	//out >> dob;
	getline(out, u);
	while (!out.eof())
	{
		if (email == b)
		{

			FINAL = ph;
			break;
		}


		out >> name;
		out >> email;
		out >> ph;
		out >> dob;
		//out >> dob;
		getline(out, u);

	}
	return FINAL;
}
std::string previousLocation(MainForm^ ptr, std::string b) {
	std::ifstream out;
	out.open("about.txt");
	std::string name;
	std::string email, FINAL, ph;
	std::string  u, dob,loc;
	out >> name;
	out >> email;
	out >> ph;
	out >> dob;
	out >> loc;
	getline(out, u);
	while (!out.eof())
	{
		if (email == b)
		{

			FINAL = loc;
			break;
		}


		out >> name;
		out >> email;
		out >> ph;
		out >> dob;
		out >> loc;
		getline(out, u);

	}
	return FINAL;
}
//void modifyAbout::modAbout(MainForm^ ptr) {
//	string storeDOB;
//	String^ str1;
//	String^ str2;String^ str3;
//	string fName = "about.txt";
//	int lines = checkLinesAbout(fName);
//	ifstream read;
//	ofstream in;
//	read.open("about.txt");
//	in.open("temp1.txt");
//	String^ us = ptr->label46->Text;
//	string user = msclr::interop::marshal_as<string>(us);
//	string *n, *e, *dOb, *End,*ht,*phon;
//	string prevDate = previousDate(ptr, user);
//	n = new string[lines];
//	e = new string[lines];
//	dOb = new string[lines];
//	ht = new string[lines];
//	phon = new string[lines];
//	End = new string[lines];
//	string end;
//	for (int i = 0; i < lines; i++)
//	{
//		if (i == lines - 1) {
//			in << n[lines - 1];
//			in << " ";
//			in << e[lines - 1];
//			in << " ";
//			if (ptr->textBox14->Text != "" || ptr->textBox14->Text != " ") {
//				in << obj2.phone;
//			}
//			else {
//				in << "Phone#";
//			}
//			in << " ";
//			if (ptr->textBox15->Text != "" || ptr->textBox15->Text != " ") {
//				in << obj2.dob;
//			}
//			else {
//				in << dOb[lines - 1];
//
//			}
//			in << " ";
//			if (ptr->comboBox2->Text != "" || ptr->comboBox2->Text != "---") {
//				in << obj2.homton;
//			}
//			else {
//				in << "Hometown";
//			}
//			in << " .\n";
//			read.close();
//			in.close();
//			remove("about.txt");
//			rename("temp1.txt", "about.txt");
//			MessageBox::Show("Saved Successful");
//			
//			//////////////////////////////////////////////////////////////////////////////////////////
//			
//			copyDOB(storeDOB,ptr);
//
//			/////////////////////////////////////////////////////////////////////////////////////////////
//
//			ptr->textBox14->Hide();
//			ptr->textBox15->Hide();
//			ptr->comboBox3->Hide();
//			ptr->textBox14->Text = "";
//			ptr->textBox15->Text = "";
//			ptr->comboBox3->Text = "---";
//			ptr->pictureBox45->Hide();
//			ptr->pictureBox46->Hide();
//			//str1 = gcnew String(obj2.dob.c_str());
//			str2 = gcnew String(obj2.homton.c_str());
//			str3 = gcnew String(obj2.phone.c_str());
//			//ptr->label44->Text = str1;
//			ptr->label43->Text = str3;
//			ptr->label45->Text = str2;
//			str1 = gcnew String(obj2.dob.c_str());
//			ptr->label44->Text = str1;
//
//			
//		}
//		read >> n[i];
//		read >> e[i];
//		read >> phon[i];
//		read >> dOb[i];
//		read >> ht[i];
//		getline(read, End[i], '.');
//		if (e[i] == user) {
//			String^ d = ptr->textBox15->Text;
//			string D = msclr::interop::marshal_as<string>(d);
//			String^ p = ptr->textBox14->Text;
//			string P = msclr::interop::marshal_as<string>(p);
//			String^ l = ptr->comboBox3->Text;
//			string L = msclr::interop::marshal_as<string>(l);
//			n[lines - 1] = n[i];
//
//			e[lines - 1] = e[i];
//			if (ptr->textBox14->Text != "" || ptr->textBox14->Text != " ") {
//				obj2.phone = P;
//			}
//			else {
//				obj2.phone = "Phone#";
//			}
//			if (ptr->textBox15->Text != "" || ptr->textBox15->Text != " ") {
//				obj2.dob = D;
//				storeDOB = D;
//			}
//			else {
//				obj2.dob = prevDate;
//				storeDOB = prevDate;
//			}
//			if (ptr->comboBox2->Text != "" || ptr->comboBox2->Text != "---") {
//				obj2.homton = L;
//			}
//			else {
//				obj2.homton = "Hometown";
//			}
//		}
//		else {
//			in << n[i];
//			in << " ";
//			in << e[i];
//			in << " ";
//			in << phon[i];
//			in << " ";
//			in << dOb[i];
//			in << " ";
//			in << ht[i];
//			in << " .\n";
//
//		}
//
//	}
//
//	//////////////////////////////////////////////////////////////////////////////
//	
//
//
//
//
//}

void modifyAbout::modDob(MainForm^ ptr) {
	std::string storeDOB;
	String^ str1;
	String^ str2; String^ str3;
	std::string fName = "about.txt";
	int lines = checkLinesAbout(fName);
	std::ifstream read;
	std::ofstream in;
	read.open("about.txt");
	in.open("temp1.txt");
	String^ us = ptr->label46->Text;
	std::string user = msclr::interop::marshal_as<std::string>(us);
	std::string *n, *e, *dOb, *End, *ht, *phon;
	//string prevDate = previousDate(ptr, user);
	std::string prevPh= previousPhone(ptr, user);
	std::string prevLoc= previousLocation(ptr, user);
	n = new std::string[lines];
	e = new std::string[lines];
	dOb = new std::string[lines];
	ht = new std::string[lines];
	phon = new std::string[lines];
	End = new std::string[lines];
	std::string end;
	for (int i = 0; i < lines; i++)
	{
		if (i == lines - 1) {
			in << n[lines - 1];
			in << " ";
			in << e[lines - 1];
			in << " ";
			
			in << obj2.phone;
			
			in << " ";
			//if (ptr->textBox15->Text != "" || ptr->textBox15->Text != " ") {
				in << obj2.dob;
			
			
			in << " ";
			
			in << obj2.homton;
			in << " .\n";
			read.close();
			in.close();
			remove("about.txt");
			rename("temp1.txt", "about.txt");
			MessageBox::Show("Saved Successful");

			//////////////////////////////////////////////////////////////////////////////////////////

			copyDOB(storeDOB, ptr);

			/////////////////////////////////////////////////////////////////////////////////////////////

		//	ptr->textBox14->Hide();
			ptr->textBox15->Hide();
		//	ptr->comboBox3->Hide();
			//ptr->textBox14->Text = "";
			//ptr->textBox15->Text = "";
		//	ptr->comboBox3->Text = "---";
		//	ptr->pictureBox45->Hide();
		//	ptr->pictureBox46->Hide();
			//str1 = gcnew String(obj2.dob.c_str());
			str2 = gcnew String(obj2.homton.c_str());
			str3 = gcnew String(obj2.phone.c_str());
			//ptr->label44->Text = str1;
			ptr->label43->Text = str3;
			ptr->label45->Text = str2;
			str1 = gcnew String(obj2.dob.c_str());
			ptr->label44->Text = str1;


		}
		read >> n[i];
		read >> e[i];
		read >> phon[i];
		read >> dOb[i];
		read >> ht[i];
		getline(read, End[i], '.');
		if (e[i] == user) {
			String^ d = ptr->textBox15->Text;
			std::string D = msclr::interop::marshal_as<std::string>(d);
			/*String^ p = ptr->textBox14->Text;
			string P = msclr::interop::marshal_as<string>(p);
			String^ l = ptr->comboBox3->Text;
			string L = msclr::interop::marshal_as<string>(l);*/
			n[lines - 1] = n[i];

			e[lines - 1] = e[i];
			//if (ptr->textBox14->Text != "" || ptr->textBox14->Text != " ") {
				obj2.phone = prevPh;
			//}
			/*else {
				obj2.phone = "Phone#";
			}*/
			//if (ptr->textBox15->Text != "" || ptr->textBox15->Text != " ") {
				obj2.dob = D;
				storeDOB = D;
			//}
			/*else {
				obj2.dob = prevDate;
				storeDOB = prevDate;
			}*/
			//if (ptr->comboBox2->Text != "" || ptr->comboBox2->Text != "---") {
				obj2.homton = prevLoc;
			//}
			/*else {
				obj2.homton = "Hometown";
			}*/
		}
		else {
			in << n[i];
			in << " ";
			in << e[i];
			in << " ";
			in << phon[i];
			in << " ";
			in << dOb[i];
			in << " ";
			in << ht[i];
			in << " .\n";

		}

	}
}
void modifyAbout::modPhone(MainForm^ ptr) {
	std::string storeDOB;
	String^ str1;
	String^ str2; String^ str3;
	std::string fName = "about.txt";
	int lines = checkLinesAbout(fName);
	std::ifstream read;
	std::ofstream in;
	read.open("about.txt");
	in.open("temp1.txt");
	String^ us = ptr->label46->Text;
	std::string user = msclr::interop::marshal_as<std::string>(us);
	std::string *n, *e, *dOb, *End, *ht, *phon;
	std::string prevDate = previousDate(ptr, user);
	//string prevPh = previousPhone(ptr, user);
	std::string prevLoc = previousLocation(ptr, user);
	n = new std::string[lines];
	e = new std::string[lines];
	dOb = new std::string[lines];
	ht = new std::string[lines];
	phon = new std::string[lines];
	End = new std::string[lines];
	std::string end;
	for (int i = 0; i < lines; i++)
	{
		if (i == lines - 1) {
			in << n[lines - 1];
			in << " ";
			in << e[lines - 1];
			in << " ";

			in << obj2.phone;

			in << " ";
			//if (ptr->textBox15->Text != "" || ptr->textBox15->Text != " ") {
				in << obj2.dob;
			//}
			/*else {
				in << dOb[lines - 1];

			}*/
			in << " ";

			in << obj2.homton;
			in << " .\n";
			read.close();
			in.close();
			remove("about.txt");
			rename("temp1.txt", "about.txt");
			MessageBox::Show("Saved Successful");

			//////////////////////////////////////////////////////////////////////////////////////////

			//copyDOB(storeDOB, ptr);

			/////////////////////////////////////////////////////////////////////////////////////////////

				ptr->textBox14->Hide();
			//ptr->textBox15->Hide();
			//	ptr->comboBox3->Hide();
			//ptr->textBox14->Text = "";
			//ptr->textBox15->Text = "";
			//	ptr->comboBox3->Text = "---";
			//	ptr->pictureBox45->Hide();
			//	ptr->pictureBox46->Hide();
			//str1 = gcnew String(obj2.dob.c_str());
			str2 = gcnew String(obj2.homton.c_str());
			str3 = gcnew String(obj2.phone.c_str());
			//ptr->label44->Text = str1;
			ptr->label43->Text = str3;
			ptr->label45->Text = str2;
			str1 = gcnew String(obj2.dob.c_str());
			ptr->label44->Text = str1;


		}
		read >> n[i];
		read >> e[i];
		read >> phon[i];
		read >> dOb[i];
		read >> ht[i];
		getline(read, End[i], '.');
		if (e[i] == user) {
			//String^ d = ptr->textBox15->Text;
			//string D = msclr::interop::marshal_as<string>(d);
			String^ p = ptr->textBox14->Text;
			std::string P = msclr::interop::marshal_as<std::string>(p);
			//String^ l = ptr->comboBox3->Text;
			//string L = msclr::interop::marshal_as<string>(l);
			n[lines - 1] = n[i];

			e[lines - 1] = e[i];
			//if (ptr->textBox14->Text != "" || ptr->textBox14->Text != " ") {
				obj2.phone = P;
			//}
			/*else {
				obj2.phone = "Phone#";
			}*/
			//if (ptr->textBox15->Text != "" || ptr->textBox15->Text != " ") {
				obj2.dob = prevDate;
				storeDOB = prevDate;
			//}
			/*else {
				obj2.dob = prevDate;
				storeDOB = prevDate;
			}*/
			//if (ptr->comboBox2->Text != "" || ptr->comboBox2->Text != "---") {
				obj2.homton = prevLoc;
			//}
			/*else {
				obj2.homton = "Hometown";
			}*/
		}
		else {
			in << n[i];
			in << " ";
			in << e[i];
			in << " ";
			in << phon[i];
			in << " ";
			in << dOb[i];
			in << " ";
			in << ht[i];
			in << " .\n";

		}

	}
}

void modifyAbout::modLocation(MainForm^ ptr) {
	std::string storeDOB;
	String^ str1;
	String^ str2; String^ str3;
	std::string fName = "about.txt";
	int lines = checkLinesAbout(fName);
	std::ifstream read;
	std::ofstream in;
	read.open("about.txt");
	in.open("temp1.txt");
	String^ us = ptr->label46->Text;
	std::string user = msclr::interop::marshal_as<std::string>(us);
	std::string *n, *e, *dOb, *End, *ht, *phon;
	std::string prevDate = previousDate(ptr, user);
	std::string prevPh = previousPhone(ptr, user);
	//string prevLoc = previousLocation(ptr, user);
	n = new std::string[lines];
	e = new std::string[lines];
	dOb = new std::string[lines];
	ht = new std::string[lines];
	phon = new std::string[lines];
	End = new std::string[lines];
	std::string end;
	for (int i = 0; i < lines; i++)
	{
		if (i == lines - 1) {
			in << n[lines - 1];
			in << " ";
			in << e[lines - 1];
			in << " ";

			in << obj2.phone;

			in << " ";
			//if (ptr->textBox15->Text != "" || ptr->textBox15->Text != " ") {
				in << obj2.dob;
			//}
			/*else {
				in << dOb[lines - 1];

			}*/
			in << " ";

			in << obj2.homton;
			in << " .\n";
			read.close();
			in.close();
			remove("about.txt");
			rename("temp1.txt", "about.txt");
			MessageBox::Show("Saved Successful");

			//////////////////////////////////////////////////////////////////////////////////////////

			//copyDOB(storeDOB, ptr);

			/////////////////////////////////////////////////////////////////////////////////////////////

			//	ptr->textBox14->Hide();
			//ptr->textBox15->Hide();
				ptr->comboBox3->Hide();
			//ptr->textBox14->Text = "";
			//ptr->textBox15->Text = "";
			//	ptr->comboBox3->Text = "---";
			//	ptr->pictureBox45->Hide();
			//	ptr->pictureBox46->Hide();
			//str1 = gcnew String(obj2.dob.c_str());
			str2 = gcnew String(obj2.homton.c_str());
			str3 = gcnew String(obj2.phone.c_str());
			//ptr->label44->Text = str1;
			ptr->label43->Text = str3;
			ptr->label45->Text = str2;
			str1 = gcnew String(obj2.dob.c_str());
			ptr->label44->Text = str1;


		}
		read >> n[i];
		read >> e[i];
		read >> phon[i];
		read >> dOb[i];
		read >> ht[i];
		getline(read, End[i], '.');
		if (e[i] == user) {
			//String^ d = ptr->textBox15->Text;
			//string D = msclr::interop::marshal_as<string>(d);
			//String^ p = ptr->textBox14->Text;
			//string P = msclr::interop::marshal_as<string>(p);
			String^ l = ptr->comboBox3->Text;
			std::string L = msclr::interop::marshal_as<std::string>(l);
			n[lines - 1] = n[i];

			e[lines - 1] = e[i];
			//if (ptr->textBox14->Text != "" || ptr->textBox14->Text != " ") {
				obj2.phone = prevPh;
			//}
			/*else {
				obj2.phone = "Phone#";
			}*/
			//if (ptr->textBox15->Text != "" || ptr->textBox15->Text != " ") {
				obj2.dob = prevDate;
				storeDOB = prevDate;
			//}
			/*else {
				obj2.dob = prevDate;
				storeDOB = prevDate;
			}*/
			//if (ptr->comboBox2->Text != "" || ptr->comboBox2->Text != "---") {
				obj2.homton = L;
			//}
			/*else {
				obj2.homton = "Hometown";
			}*/
		}
		else {
			in << n[i];
			in << " ";
			in << e[i];
			in << " ";
			in << phon[i];
			in << " ";
			in << dOb[i];
			in << " ";
			in << ht[i];
			in << " .\n";

		}

	}
}


profilePic pp;
System::Void MainForm::button7_Click(System::Object^  sender, System::EventArgs^  e)
{
	//temp upload pic for check 
	pp.tempProfilePic(this);

	this->timer3->Start();
	progressBar3->Show();
}
std::string store = "\0";
void profilePic::tempProfilePic(MainForm^ ptr) {
	ptr->openFileDialog1->ShowDialog();
	ptr->pictureBox47->ImageLocation = ptr->openFileDialog1->FileName;
	String^ a;
	a = ptr->openFileDialog1->FileName;
	std::string b = msclr::interop::marshal_as<std::string>(a);
	ptr->pictureBox47->Show();
	ptr->pictureBox47->ImageLocation = a;
	store = b;
	//return b;
}
System::Void MainForm::button8_Click(System::Object^  sender, System::EventArgs^  e) {
	//confirm button profile pic
	setAfterProfilePic(this);
	panel11->Hide();
	panel14->Hide();
	panel7->Show();
	panel15->Hide();
	panel16->Hide();
	splitContainer1->Hide();
}
System::Void MainForm::label82_Click(System::Object^  sender, System::EventArgs^  e) {
	panel14->Show();
	panel11->Show();
	button7->Show();
	button8->Show();
	button9->Show();
	button10->Show();
	pictureBox47->Hide();
	label50->Show();
}
void setAfterProfilePic(MainForm^ ptr) {
	ptr->pictureBox47->Hide();
	std::string c = store;


	////////////////////////////////////////////////////

	
	std::string fName = "profilePic.txt";
	int lines = checkProfilePicFile(fName);
	std::string set;
	std::ifstream read;
	std::ofstream in;
	read.open("profilePic.txt");
	in.open("temp2.txt");
	String^ us = ptr->label46->Text;
	std::string user = msclr::interop::marshal_as<std::string>(us);
	std::string *e, *link;
	e = new std::string[lines];
	//End = new string[lines];
	link = new std::string[lines];
	std::string endd;
	for (int i = 0; i < lines; i++)
	{
		if (i == lines - 1) {
			in << e[lines - 1];
			in << " ";
			in << set;
			in << "\n";
			read.close();
			in.close();
			remove("profilePic.txt");
			rename("temp2.txt", "profilePic.txt");
			MessageBox::Show("Saved Successful");
			String^ str10;
			str10 = gcnew String(set.c_str());
			ptr->pictureBox38->Show();
			ptr->pictureBox27->Show();
			ptr->pictureBox38->ImageLocation = str10;
			ptr->pictureBox27->ImageLocation = str10;
			ptr->pictureBox54->ImageLocation = str10;
			ptr->pictureBox68->ImageLocation = str10;
		}
		read >> e[i];
		getline(read, link[i]);
		if (e[i] == user) {

			e[lines - 1] = e[i];
			
			set = c;
		}
		else {
			
			in << e[i];
			in << " ";
			in << link[i];
			in << "\n";

		}

	}


	/////////////////////////////////////////////////
	

	////////////////////////////////////////////////

}

void WritePost::post(MainForm^ ptr) {
	ptr->comboBox6->Hide();
	ptr->comboBox6->Text = "";
	std::string location = locationDetect(ptr);
	String^ str33 = gcnew String(location.c_str());
	//ptr->label73->Hide();
	ptr->label73->Text = str33;
	
	delete ptr->pBox;
	static int axis = 280;
	std::ifstream uol;

	uol.open("value.txt");
	int a;
	a = valueCount;
	uol >> a;
	axis = a;
	uol.close();

	if (ptr->textBox16->Text == "")
	{
		MessageBox::Show("Please Write Something");
	}
	else {
		////////////////////////////////////////////////////////////////////////////////////

		if (ptr->comboBox4->Text == "Friends") {
			valueCount += 340;
			std::string space = " ";
			int count = 0;
			std::ofstream out;
			out.open("FriendsStatus.txt", std::ios::app);
			String^ a = ptr->label46->Text;
			std::string b = msclr::interop::marshal_as<std::string>(a);   // write data in to file "status.txt"     to write status
			out << b;
			out << " ";
			a = ptr->textBox16->Text;
			b = msclr::interop::marshal_as<std::string>(a);
			b += space + location;
			out << b;
			out << ";";
			ptr->textBox16->Text = "";
			a = ptr->openFileDialog2->FileName;
			b = msclr::interop::marshal_as<std::string>(a);
			out << b;
			out << "\n";
			out.close();


			String^ c = ptr->label46->Text;
			std::string d = msclr::interop::marshal_as<std::string>(c);
			std::ifstream read, var;

			read.open("FriendsStatus.txt");
			var.open("profilePic.txt");

			std::string x;
			std::string y;
			std::string z;      // post the status in the textbox
			std::string u;
			String ^str3;
			String ^str4;
			String ^str5;
			read >> x;
			getline(read, y, ';');
			getline(read, z);
			while (!read.eof())
			{

				++count;
				read >> x;
				getline(read, y, ';');
				getline(read, z);

			}
			--count;
			if (d == x)
			{

				var >> x;
				getline(var, u);
				while (!var.eof())
				{
					if (d == x)
					{
						str4 = gcnew String(u.c_str());
					}

					var >> x;
					getline(var, u);

				}
				var.close();

				str3 = gcnew String(y.c_str());
				String ^str2 = gcnew String(d.c_str());
				//str5 = gcnew String(z.c_str());



				ptr->pBox1 = gcnew array<PictureBox^>(100);
				ptr->pBox1[count] = gcnew PictureBox();
				ptr->pBox1[count]->Size = System::Drawing::Size(50, 50);
				ptr->pBox1[count]->Visible = true;
				ptr->pBox1[count]->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				ptr->pBox1[count]->ImageLocation = str4;
				ptr->panel13->Controls->Add(ptr->pBox1[count]);
			//	ptr->panel16->Controls->Add(ptr->pBox1[count]);


				array<Label^> ^lb = gcnew array<Label^>(100);
				lb[count] = gcnew Label();
				lb[count]->Visible = true;
				lb[count]->Text = ptr->label46->Text;
				ptr->panel13->Controls->Add(lb[count]);
			//	ptr->panel16->Controls->Add(lb[count]);


				array<TextBox^> ^status = gcnew array<TextBox^>(100);
				status[count] = gcnew TextBox();
				status[count]->Visible = true;
				status[count]->Multiline = true;
				status[count]->Size = System::Drawing::Size(239, 47);
				status[count]->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
				status[count]->Text = str3;
				ptr->panel13->Controls->Add(status[count]);
			//	ptr->panel16->Controls->Add(status[count]);


				array<PictureBox^> ^pBox = gcnew array<PictureBox^>(100);
				pBox[count] = gcnew PictureBox();
				pBox[count]->Size = System::Drawing::Size(150, 150);
				pBox[count]->Visible = true;
				pBox[count]->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				pBox[count]->ImageLocation = ptr->openFileDialog2->FileName;

				array<CheckBox^> ^check = gcnew array<CheckBox^>(100);
				check[count] = gcnew CheckBox();

				check[count]->Visible = true;
				check[count]->Text = "Like";
				ptr->panel13->Controls->Add(check[count]);
			//	ptr->panel16->Controls->Add(check[count]);


				array<Label^> ^like = gcnew array<Label^>(100);
				like[count] = gcnew Label();

				like[count]->Visible = true;
				like[count]->Text = "0 Likes";
				ptr->panel13->Controls->Add(like[count]);
			//	ptr->panel16->Controls->Add(like[count]);


				array<Label^> ^noComment = gcnew array<Label^>(100);
				noComment[count] = gcnew Label();

				noComment[count]->Visible = true;
				noComment[count]->Text = "	0 Comments";
				ptr->panel13->Controls->Add(noComment[count]);
			//	ptr->panel16->Controls->Add(noComment[count]);


				array<Label^> ^comment = gcnew array<Label^>(100);
				comment[count] = gcnew Label();

				comment[count]->Visible = true;
				comment[count]->Text = "Comments";
				ptr->panel13->Controls->Add(comment[count]);
			//	ptr->panel16->Controls->Add(comment[count]);


				array<TextBox^> ^txtcomment = gcnew array<TextBox^>(100);
				txtcomment[count] = gcnew TextBox();

				txtcomment[count]->Visible = true;
				txtcomment[count]->Multiline = true;
				txtcomment[count]->Size = System::Drawing::Size(239, 47);
				txtcomment[count]->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
				ptr->panel13->Controls->Add(txtcomment[count]);
			//	ptr->panel16->Controls->Add(txtcomment[count]);


				array<TextBox^> ^ucomment = gcnew array<TextBox^>(100);
				ucomment[count] = gcnew TextBox();

				ucomment[count]->Visible = true;
				ucomment[count]->Multiline = true;
				ucomment[count]->Size = System::Drawing::Size(239, 21);
				ucomment[count]->ScrollBars = System::Windows::Forms::ScrollBars::Both;
				ptr->panel13->Controls->Add(ucomment[count]);
			//	ptr->panel16->Controls->Add(ucomment[count]);


				array<Button^> ^button = gcnew array<Button^>(100);
				button[count] = gcnew Button();

				button[count]->Size = System::Drawing::Size(88, 23);
				button[count]->Visible = true;
				button[count]->Text = "Comment";
				ptr->panel13->Controls->Add(button[count]);
				//ptr->panel16->Controls->Add(button[count]);


				std::ifstream val1;
				val1.open("value.txt");
				int a;
				val1 >> a;
				val1.close();
				if (ptr->openFileDialog2->FileName == "openFileDialog2")
				{

					ptr->pBox1[count]->Location = Point(1, axis);
					lb[count]->Location = Point(59, axis + 10);
					status[count]->Location = Point(1, axis + 70);
					check[count]->Location = Point(1, axis + 140);
					like[count]->Location = Point(1, axis + 120);
					noComment[count]->Location = Point(118, axis + 120);
					comment[count]->Location = Point(118, axis + 140);
					txtcomment[count]->Location = Point(1, axis + 170);
					ucomment[count]->Location = Point(1, axis + 220);
					button[count]->Location = Point(1, axis + 240);
					axis = axis + 340;
				}
				else
				{

					ptr->pBox1[count]->Location = Point(1, axis);
					lb[count]->Location = Point(59, axis + 5);
					status[count]->Location = Point(1, axis + 70);
					pBox[count]->Location = Point(1, axis + 140);
					ptr->panel13->Controls->Add(pBox[count]);
				//	ptr->panel16->Controls->Add(pBox[count]);

					check[count]->Location = Point(1, axis + 320);
					like[count]->Location = Point(1, axis + 300);
					noComment[count]->Location = Point(118, axis + 300);
					comment[count]->Location = Point(118, axis + 320);
					txtcomment[count]->Location = Point(1, axis + 350);
					ucomment[count]->Location = Point(1, axis + 400);
					button[count]->Location = Point(1, axis + 420);
					axis = axis + 520;
				}
				std::ofstream val;
				val.open("value.txt");
				val << axis;
				val.close();

				val1.open("value.txt");
				int j;
				val1 >> j;
				val1.close();

				//valueCount += 340;


			}

			read.close();
			//--count;
			++count;

		}
		//ptr->label73->Hide();
		else {
			valueCount += 340;
			std::string space = " ";
			int count = 0;
			std::ofstream out;
			std::ofstream output;
			out.open("PublicStatus.txt", std::ios::app);
			output.open("FriendsStatus.txt", std::ios::app);
			String^ a = ptr->label46->Text;
			std::string b = msclr::interop::marshal_as<std::string>(a);   // write data in to file "status.txt"     to write status
			out << b;
			out << " ";
			output << b << " ";
			a = ptr->textBox16->Text;
			b = msclr::interop::marshal_as<std::string>(a);
			b += space + location;
			out << b;
			out << ";";
			output << b << ";";
			ptr->textBox16->Text = "";
			a = ptr->openFileDialog2->FileName;
			b = msclr::interop::marshal_as<std::string>(a);
			out << b;
			out << "\n";
			output << b << "\n";
			out.close();
			output.close();

			String^ c = ptr->label46->Text;
			std::string d = msclr::interop::marshal_as<std::string>(c);
			std::ifstream read, var;

			read.open("PublicStatus.txt");
			var.open("profilePic.txt");

			std::string x;
			std::string y;
			std::string z;      // post the status in the textbox
			std::string u;
			String ^str3;
			String ^str4;
			String ^str5;
			read >> x;
			getline(read, y, ';');
			getline(read, z);
			while (!read.eof())
			{

				++count;
				read >> x;
				getline(read, y, ';');
				getline(read, z);

			}
			--count;
			if (d == x)
			{

				var >> x;
				getline(var, u);
				while (!var.eof())
				{
					if (d == x)
					{
						str4 = gcnew String(u.c_str());
					}

					var >> x;
					getline(var, u);

				}
				var.close();

				str3 = gcnew String(y.c_str());
				String ^str2 = gcnew String(d.c_str());
				//str5 = gcnew String(z.c_str());



				ptr->pBox1 = gcnew array<PictureBox^>(100);
				ptr->pBox1[count] = gcnew PictureBox();
				ptr->pBox1[count]->Size = System::Drawing::Size(50, 50);
				ptr->pBox1[count]->Visible = true;
				ptr->pBox1[count]->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				ptr->pBox1[count]->ImageLocation = str4;
				ptr->panel13->Controls->Add(ptr->pBox1[count]);
			//	ptr->panel16->Controls->Add(ptr->pBox1[count]);


				array<Label^> ^lb = gcnew array<Label^>(100);
				lb[count] = gcnew Label();
				lb[count]->Visible = true;
				lb[count]->Text = ptr->label46->Text;
				ptr->panel13->Controls->Add(lb[count]);
				//ptr->panel16->Controls->Add(lb[count]);


				array<TextBox^> ^status = gcnew array<TextBox^>(100);
				status[count] = gcnew TextBox();
				status[count]->Visible = true;
				status[count]->Multiline = true;
				status[count]->Size = System::Drawing::Size(239, 47);
				status[count]->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
				status[count]->Text = str3;
				ptr->panel13->Controls->Add(status[count]);
				//ptr->panel16->Controls->Add(status[count]);


				array<PictureBox^> ^pBox = gcnew array<PictureBox^>(100);
				pBox[count] = gcnew PictureBox();
				pBox[count]->Size = System::Drawing::Size(150, 150);
				pBox[count]->Visible = true;
				pBox[count]->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				pBox[count]->ImageLocation = ptr->openFileDialog2->FileName;

				array<CheckBox^> ^check = gcnew array<CheckBox^>(100);
				check[count] = gcnew CheckBox();

				check[count]->Visible = true;
				check[count]->Text = "Like";
				ptr->panel13->Controls->Add(check[count]);
				//ptr->panel16->Controls->Add(check[count]);

				array<Label^> ^like = gcnew array<Label^>(100);
				like[count] = gcnew Label();

				like[count]->Visible = true;
				like[count]->Text = "0 Likes";
				ptr->panel13->Controls->Add(like[count]);
			//	ptr->panel16->Controls->Add(like[count]);


				array<Label^> ^noComment = gcnew array<Label^>(100);
				noComment[count] = gcnew Label();

				noComment[count]->Visible = true;
				noComment[count]->Text = "	0 Comments";
				ptr->panel13->Controls->Add(noComment[count]);
			//	ptr->panel16->Controls->Add(noComment[count]);


				array<Label^> ^comment = gcnew array<Label^>(100);
				comment[count] = gcnew Label();

				comment[count]->Visible = true;
				comment[count]->Text = "Comments";
				ptr->panel13->Controls->Add(comment[count]);
			//	ptr->panel16->Controls->Add(comment[count]);


				array<TextBox^> ^txtcomment = gcnew array<TextBox^>(100);
				txtcomment[count] = gcnew TextBox();

				txtcomment[count]->Visible = true;
				txtcomment[count]->Multiline = true;
				txtcomment[count]->Size = System::Drawing::Size(239, 47);
				txtcomment[count]->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
				ptr->panel13->Controls->Add(txtcomment[count]);
			//	ptr->panel16->Controls->Add(txtcomment[count]);


				array<TextBox^> ^ucomment = gcnew array<TextBox^>(100);
				ucomment[count] = gcnew TextBox();

				ucomment[count]->Visible = true;
				ucomment[count]->Multiline = true;
				ucomment[count]->Size = System::Drawing::Size(239, 21);
				ucomment[count]->ScrollBars = System::Windows::Forms::ScrollBars::Both;
				ptr->panel13->Controls->Add(ucomment[count]);
			//	ptr->panel16->Controls->Add(ucomment[count]);


				array<Button^> ^button = gcnew array<Button^>(100);
				button[count] = gcnew Button();

				button[count]->Size = System::Drawing::Size(88, 23);
				button[count]->Visible = true;
				button[count]->Text = "Comment";
				ptr->panel13->Controls->Add(button[count]);
			//	ptr->panel16->Controls->Add(button[count]);

				std::ifstream val1;
				val1.open("value.txt");
				int a;
				val1 >> a;
				val1.close();
				if (ptr->openFileDialog2->FileName == "openFileDialog2")
				{

					ptr->pBox1[count]->Location = Point(1, axis);
					lb[count]->Location = Point(59, axis + 10);
					status[count]->Location = Point(1, axis + 70);
					check[count]->Location = Point(1, axis + 140);
					like[count]->Location = Point(1, axis + 120);
					noComment[count]->Location = Point(118, axis + 120);
					comment[count]->Location = Point(118, axis + 140);
					txtcomment[count]->Location = Point(1, axis + 170);
					ucomment[count]->Location = Point(1, axis + 220);
					button[count]->Location = Point(1, axis + 240);
					axis = axis + 340;
				}
				else
				{

					ptr->pBox1[count]->Location = Point(1, axis);
					lb[count]->Location = Point(59, axis + 5);
					status[count]->Location = Point(1, axis + 70);
					pBox[count]->Location = Point(1, axis + 140);
					ptr->panel13->Controls->Add(pBox[count]);
					//ptr->panel16->Controls->Add(pBox[count]);

					check[count]->Location = Point(1, axis + 320);
					like[count]->Location = Point(1, axis + 300);
					noComment[count]->Location = Point(118, axis + 300);
					comment[count]->Location = Point(118, axis + 320);
					txtcomment[count]->Location = Point(1, axis + 350);
					ucomment[count]->Location = Point(1, axis + 400);
					button[count]->Location = Point(1, axis + 420);
					axis = axis + 520;
				}
				std::ofstream val;
				val.open("value.txt");
				val << axis;
				val.close();

				val1.open("value.txt");
				int j;
				val1 >> j;
				val1.close();
				
			}

			read.close();
			//--count;
			++count;
		}

	}

	ptr->comboBox6->Enabled = false;
//	ptr->label73->Hide();
	////////////////////////////////////////////////////////////////////////////////////
}

System::Void MainForm::button13_Click(System::Object^  sender, System::EventArgs^  e) {
	//location  search
	String^ street = textBox19->Text;
	String^ city = textBox20->Text;
	String^ state = textBox21->Text;
	String^ zip = textBox22->Text;
	std::string st, ci, stat, zipCode;
	st= msclr::interop::marshal_as<std::string>(street);
	ci = msclr::interop::marshal_as<std::string>(city);
	stat = msclr::interop::marshal_as<std::string>(state);
	zipCode = msclr::interop::marshal_as<std::string>(zip);
	StringBuilder *address = new StringBuilder();
	//gcnew String(u.c_str());
	address->append("https://www.google.com/maps/place/");
	if (st != "" || st != "\0") 
	{
		//this->webBrowser1->Navigate(this->textBox19->Text);
	
		address->append(st + "," + "+");
		
		
	}
	if (ci != "" || ci != "\0") {
		address->append(ci + "," + "+");
		//this->webBrowser1->Navigate(this->textBox20->Text);
	}
	if (stat != "" || stat != "\0") {
		address->append(stat + "," + "+");
		//this->webBrowser1->Navigate(this->textBox21->Text);
	}
	if (zipCode != "" || zipCode != "\0") {
		address->append(zipCode + "," + "+");
		//this->webBrowser1->Navigate(this->textBox22->Text);
	}
	String^ str1 = gcnew String(address->str().c_str());
	this->webBrowser1->Navigate(str1);
}

coverPic cp;
std::string coverStore = "\0";
System::Void MainForm::pictureBox67_Click(System::Object^  sender, System::EventArgs^  e) {
	openFileDialog4->ShowDialog();
	pictureBox67->ImageLocation = openFileDialog4->FileName;
	String^ a;
	a = openFileDialog4->FileName;
	std::string b = msclr::interop::marshal_as<std::string>(a);
	pictureBox67->ImageLocation = a;
	coverStore = b;
	cp.setCover(this);
}
int checkCoverLines(std::string &fName) {
	std::string s;
	int sTotal = 0;

	std::ifstream in;
	in.open("coverPic.txt");

	while (!in.eof()) {
		getline(in, s);
		sTotal++;
	}
	in.close();
	return sTotal;
}

void coverPic::setCover(MainForm^ ptr) {

	std::string c = coverStore;

	std::string fName = "coverPic.txt";
	int lines = checkCoverLines(fName);
	std::string set;
	std::ifstream read;
	std::ofstream in;
	read.open("coverPic.txt");
	in.open("temp6.txt");
	String^ us = ptr->label46->Text;
	std::string user = msclr::interop::marshal_as<std::string>(us);
	std::string *e, *link;
	e = new std::string[lines];
	link = new std::string[lines];
	std::string endd;
	for (int i = 0; i < lines; i++)
	{
		if (i == lines - 1) {
			in << e[lines - 1];
			in << " ";
			in << set;
			in << "\n";
			read.close();
			in.close();
			remove("coverPic.txt");
			rename("temp6.txt", "coverPic.txt");
			MessageBox::Show("Saved Successful");
			String^ str10;
			str10 = gcnew String(set.c_str());
			ptr->pictureBox67->ImageLocation = str10;
		}
		read >> e[i];
		getline(read, link[i]);
		if (e[i] == user) {

			e[lines - 1] = e[i];

			set = c;
		}
		else {

			in << e[i];
			in << " ";
			in << link[i];
			in << "\n";

		}

	}
}

Messagess sm;
System::Void MainForm::button18_Click(System::Object^  sender, System::EventArgs^  e) {
	//sent msgs
	String^ str = label46->Text;
	std::string usr= msclr::interop::marshal_as<std::string>(str);
	String^ str2 = textBox24->Text;
	std::string mssg = msclr::interop::marshal_as<std::string>(str);
	if (textBox24->Enabled == false && textBox25->Text != "") {
		sm.SENTmsgs(this);
		pictureBox71->Hide();
		textBox24->Enabled = true;
		textBox24->Text = "";
		textBox25->Text = "";
	}
	//else if (usr == mssg) {
	//	MessageBox::Show("Linkify Can't allow to sent message same ID");
	//	//textBox24->Enabled = true;
	//	textBox24->Text = "";
	//	textBox25->Text = "";
	//}
	else {
		MessageBox::Show("Error! Check ID and Write Msg");
		textBox24->Text = "";
		textBox25->Text = "";
	}

}

void Messagess::SENTmsgs(MainForm^ ptr) {
	std::ofstream out;
	
	out.open("messages.txt", std::ios::app);

	String^ a = ptr->textBox24->Text;
	// write the username in the file
	std::string b = msclr::interop::marshal_as<std::string>(a);
	out << b;
	out << " ";
	a = ptr->label46->Text;                              //write the sender name next
	b = msclr::interop::marshal_as<std::string>(a);
	out << b;
	out << " ";
	a = ptr->textBox25->Text;
	b = msclr::interop::marshal_as<std::string>(a);
	out << b << ";";                                  // write message next
	out << "\n";
	out.close();

	MessageBox::Show("Messagee Sent");
	ptr->textBox24->Text = "";
	ptr->textBox25->Text = "";
	out.close();
}


System::Void MainForm::pictureBox52_Click(System::Object^  sender, System::EventArgs^  e) {
	//chat and message box
	sm.newMsg(this);
	panel16->Show();
	pictureBox71->Hide();
	textBox24->Enabled = true;
	textBox24->Text = "";
	textBox25->Text = "";
	panel11->Hide();
	panel14->Hide();
	panel18->Hide();
	panel15->Hide();
}
System::Void MainForm::label26_Click(System::Object^  sender, System::EventArgs^  e) {
	//message
	sm.newMsg(this);
	panel16->Show();
	pictureBox71->Hide();
	textBox24->Enabled = true;
	textBox24->Text = "";
	textBox25->Text = "";
	panel11->Hide();
	panel14->Hide();
	panel15->Hide();
	panel18->Hide();

}
void Messagess::newMsg(MainForm^ ptr) {


	std::ifstream in;
	
		in.open("messages.txt");
	
	String^ msg = ptr->label46->Text;
	std::string m = msclr::interop::marshal_as<std::string>(msg);
	std::string x;
	std::string y;
	std::string z;
	String ^str1;
	String ^str2;
	int temp = 0;
	in >> x;                          // read the messages of the username from the file message.txt
	in >> y;
	getline(in, z, ';');
	while (!in.eof())
	{
		if (m == x)
		{
			temp++;
		}
		in >> x;
		in >> y;
		getline(in, z, ';');
	}
	if (temp == 1)                     // if one one message the display one message
		MessageBox::Show("One New Message"); // if more than one display new messages
	else if (temp > 1)
		MessageBox::Show("New Messages");
	in.close();


	in.open("messages.txt");
	in >> x;
	in >> y;
	getline(in, z, ';');
	while (!in.eof())
	{

		if (m == x)
		{
			str1 = gcnew String(y.c_str());
			str2 = gcnew String(z.c_str());
			ptr->textBox26->AppendText(str1);             // display the the name of the sender in the from textbox
			ptr->textBox26->AppendText(" : ");
			ptr->textBox26->AppendText(str2);         // display the message of the sender in the message textbox
			ptr->textBox26->AppendText("\n");
			//in.close();

		}
		in >> x;
		in >> y;
		getline(in, z, ';');

	}

	in.close();
}


////////////////////////////////////////////////////////////

//deactivate id
int checkFile1() {
	std::string s;
	int sTotal = 0;

	std::ifstream in;
	in.open("about.txt");

	while (!in.eof()) {
		getline(in, s);
		sTotal++;
	}
	in.close();
	return sTotal;
}


deactivate dv;
System::Void MainForm::button20_Click(System::Object^  sender, System::EventArgs^  e) {
	//deactivate id
	dv.deact(this);
	MessageBox::Show("Your ID Deactivate Successful");
	Hide();
	panel7->Controls->Clear();
	MainForm^ cm = gcnew MainForm();
	cm->ShowDialog();
	panel7->Hide();
	textBox1->Text = "";
	textBox2->Text = "";
	label39->Show();
	label40->Show();
	panel16->Hide();
	textBox24->Text = "";
	textBox25->Text = "";
	textBox26->Text = "";
	panel15->Hide();
	splitContainer1->Hide();
	panel14->Hide();
	panel7->Refresh();
}
void deactivate::deact(MainForm^ ptr) {
	std::string fName = "register.txt";
	int lines = checkLines(fName);
	String^ a = ptr->label46->Text;
	std::string b = msclr::interop::marshal_as<std::string>(a);
	std::ifstream read;
	std::ofstream in;
	read.open("register.txt");
	in.open("temp10.txt");
	String^ str1; String^ str2;
	std::string *n, *e, *p, *br, *dOb, *sQ, *ANS, *End;
	n = new std::string[lines];
	e = new std::string[lines];
	p = new std::string[lines];
	br = new std::string[lines];
	dOb = new std::string[lines];
	sQ = new std::string[lines];
	ANS = new std::string[lines];
	End = new std::string[lines];
	std::string name;
	std::string email;
	std::string pass;
	std::string breaker;
	std::string dob;
	std::string sq;
	std::string ans;
	std::string end;
	for (int i = 0; i < lines; i++)
	{
		if (i == lines - 1) {
			read.close();
			in.close();
			remove("register.txt");
			rename("temp10.txt", "register.txt");
		}
		read >> n[i];
		read >> e[i];
		read >> p[i];
		read >> br[i];
		read >> dOb[i];
		getline(read, sQ[i], '?');
		read >> ANS[i];
		getline(read, End[i], '.');
		if (e[i] == b) {


			n[lines - 1] = n[i];

			e[lines - 1] = e[i];

			p[lines - 1] = p[i];

			dOb[lines - 1] = dOb[i];

			sQ[lines - 1] = sQ[i];

			ANS[lines - 1] = ANS[i];

		
		}
		else {
			in << n[i];
			in << " ";
			in << e[i];
			in << " ";
			in << p[i];
			in << " % ";
			in << dOb[i];
			in << sQ[i];
			in << "? ";
			in << ANS[i];
			in << " .\n";
		}

	}




	////////////////////////////////////////////////////////////////

    lines = checkFile1();
	//std::ifstream read;
	//std::ofstream in;
	read.open("about.txt");
	in.open("temp10.txt");
	String^ us = ptr->label46->Text;
	std::string user = msclr::interop::marshal_as<std::string>(us);
	std::string *ht, *phon;
	//string prevDate = previousDate(ptr, user);
	std::string prevPh = previousPhone(ptr, user);
	std::string prevLoc = previousLocation(ptr, user);
	n = new std::string[lines];
	e = new std::string[lines];
	dOb = new std::string[lines];
	ht = new std::string[lines];
	phon = new std::string[lines];
	End = new std::string[lines];
	for (int i = 0; i < lines; i++)
	{
		if (i == lines - 1) {
			read.close();
			in.close();
			remove("about.txt");
			rename("temp10.txt", "about.txt");

		}
		read >> n[i];
		read >> e[i];
		read >> phon[i];
		read >> dOb[i];
		read >> ht[i];
		getline(read, End[i], '.');
		if (e[i] == user) {
			
			n[lines - 1] = n[i];

			e[lines - 1] = e[i];
			phon[lines - 1] = phon[i];

			dOb[lines - 1] = dOb[i];
			ht[lines - 1] = ht[i];
			End[lines - 1] = End[i];
		}
		else {
			in << n[i];
			in << " ";
			in << e[i];
			in << " ";
			in << phon[i];
			in << " ";
			in << dOb[i];
			in << " ";
			in << ht[i];
			in << " .\n";

		}

	}
}