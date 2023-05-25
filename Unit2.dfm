object Form2: TForm2
  Left = 0
  Top = 0
  Caption = #1056#1072#1089#1087#1080#1089#1072#1085#1080#1077' '#1091#1088#1086#1082#1086#1074' '#1080#1085#1089#1090#1080#1090#1091#1090#1072
  ClientHeight = 388
  ClientWidth = 690
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object ComboBox1: TComboBox
    Left = 72
    Top = 74
    Width = 145
    Height = 21
    TabOrder = 0
    Text = #1042#1099#1073#1077#1088#1080#1090#1077' '#1090#1086#1074#1072#1088' '
    Items.Strings = (
      #1058#1077#1090#1088#1072#1076#1100' '#1074' '#1083#1080#1085#1077#1077#1095#1082#1091
      #1058#1077#1090#1088#1072#1076#1100' '#1074' '#1082#1083#1077#1090#1086#1095#1082#1091
      #1055#1077#1085#1072#1083
      #1056#1091#1095#1082#1072
      #1050#1072#1088#1072#1085#1076#1072#1096
      #1051#1080#1085#1077#1081#1082#1072
      #1057#1090#1077#1088#1082#1072' ')
  end
  object Button1: TButton
    Left = 368
    Top = 72
    Width = 75
    Height = 25
    Caption = #1054#1082
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 560
    Top = 72
    Width = 75
    Height = 25
    Caption = #1047#1072#1082#1088#1099#1090#1100
    TabOrder = 2
    OnClick = Button2Click
  end
  object StringGrid1: TStringGrid
    Left = 0
    Top = 103
    Width = 690
    Height = 285
    Align = alBottom
    ColCount = 3
    RowCount = 7
    TabOrder = 3
    ExplicitLeft = 16
    ExplicitTop = 160
    ExplicitWidth = 795
    ColWidths = (
      64
      83
      94)
    RowHeights = (
      24
      24
      24
      24
      24
      24
      24)
  end
end
