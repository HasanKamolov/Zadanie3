//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	Form2->StringGrid1->Cells[0][0]= "Цена"   ;
	Form2->StringGrid1->Cells[1][0]= "Количество"  ;
	Form2->StringGrid1->Cells[2][0]="Марка"  ;
	Form1->Visible=false;
	Form2->ShowModal();



}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
    Close();
}
//---------------------------------------------------------------------------
