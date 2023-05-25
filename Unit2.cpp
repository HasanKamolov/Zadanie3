//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
if ((ComboBox1->ItemIndex==0)) {

Form2->StringGrid1->Cells[0][1]="1000 sum";
Form2->StringGrid1->Cells[1][1]="1";
Form2->StringGrid1->Cells[2][1]="Alfa";

Form2->StringGrid1->Cells[0][2]="1500 sum";
Form2->StringGrid1->Cells[1][2]="1";
Form2->StringGrid1->Cells[2][2]="Alfa";

Form2->StringGrid1->Cells[0][3]="3000 sum";
Form2->StringGrid1->Cells[1][3]="1";
Form2->StringGrid1->Cells[2][3]="Lunix";

Form2->StringGrid1->Cells[0][4]="6000 sum";
Form2->StringGrid1->Cells[1][4]="1";
Form2->StringGrid1->Cells[2][4]="DeatNote";

	}
	if ((ComboBox1->ItemIndex==1) || (ComboBox1->ItemIndex==3)
	|| (ComboBox1->ItemIndex==5)|| (ComboBox1->ItemIndex==7))
{

}
	}


//---------------------------------------------------------------------------
void __fastcall TForm2::Button2Click(TObject *Sender)
{
    Close();
}
//---------------------------------------------------------------------------





