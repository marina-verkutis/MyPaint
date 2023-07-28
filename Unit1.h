//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include <System.ImageList.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.ExtDlgs.hpp>
#include <Vcl.ActnColorMaps.hpp>
#include <Vcl.ActnMan.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TMainMenu *MainMenu1;
	TMenuItem *File1;
	TMenuItem *New1;
	TMenuItem *Save1;
	TMenuItem *SaveAs1;
	TMenuItem *Close1;
	TMenuItem *Open1;
	TScrollBox *ScrollBox1;
	TImage *Image1;
	TPanel *Panel1;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TSavePictureDialog *SavePictureDialog1;
	TOpenPictureDialog *OpenPictureDialog1;
	TMenuItem *N2;
	TFlowPanel *FlowPanel1;
	TSpeedButton *SpeedButton1;
	TSpeedButton *SpeedButton2;
	TSpeedButton *SpeedButton3;
	TSpeedButton *SpeedButton4;
	TSpeedButton *SpeedButton5;
	TSpeedButton *SpeedButton6;
	TSpeedButton *SpeedButton7;
	TPopupMenu *PopupMenu1;
	TMenuItem *G1;
	TMenuItem *N3;
	TMenuItem *N4;
	TColorDialog *ColorDialog1;
	TPanel *Panel2;
	TFlowPanel *FlowPanel2;
	TLabel *Label5;
	TComboBox *ComboBox1;
	TLabel *Label6;
	TFlowPanel *FlowPanel3;
	TSpeedButton *SpeedButton9;
	TSpeedButton *SpeedButton10;
	TFontDialog *FontDialog1;
	TPanel *Panel3;
	TButton *Button1;
	TEdit *Edit2;
	TLabel *Label7;
	TEdit *Edit1;
	TLabel *Label8;
	TPanel *Panel4;
	TButton *Button2;
	void __fastcall New1Click(TObject *Sender);
	void __fastcall FormResize(TObject *Sender);
	void __fastcall Image1MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image1MouseLeave(TObject *Sender);
	void __fastcall SaveAs1Click(TObject *Sender);
	void __fastcall Close1Click(TObject *Sender);
	void __fastcall Save1Click(TObject *Sender);
	void __fastcall Open1Click(TObject *Sender);
	void __fastcall Image1MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall Panel2Click(TObject *Sender);
	void __fastcall SpeedButton3Click(TObject *Sender);
	void __fastcall FlowPanel2MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall ComboBox1Change(TObject *Sender);
	void __fastcall SpeedButton6Click(TObject *Sender);
	void __fastcall SpeedButton4Click(TObject *Sender);
	void __fastcall FlowPanel3MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall SpeedButton5Click(TObject *Sender);
	void __fastcall SpeedButton7Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Panel3MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall SpeedButton2Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall SpeedButton1Click(TObject *Sender);
	void __fastcall Panel4MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall Edit1KeyPress(TObject *Sender, System::WideChar &Key);

private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
