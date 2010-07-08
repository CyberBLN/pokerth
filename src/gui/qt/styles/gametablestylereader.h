/***************************************************************************
 *   Copyright (C) 2009 by Felix Hammer   *
 *   f.hammer@web.de   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#ifndef GAMETABLESTYLEREADER_H
#define GAMETABLESTYLEREADER_H

#include "tinyxml.h"
#include "configfile.h"
#include "gametableimpl.h"
#include <string>
#include <QtCore>
#include <QtGui>

class gameTableImpl;

class GameTableStyleReader : public QObject {
Q_OBJECT
public:
        GameTableStyleReader(ConfigFile *c, QWidget *w);
	~GameTableStyleReader();
	
	void readStyleFile(QString);

	void showLeftItemsErrorMessage(QString, QStringList, QString);
	void showItemPicsLeftErrorMessage(QString, QStringList, QString);

	QString getStyleDescription() const { return StyleDescription; }
	QString getStyleMaintainerName() const { return StyleMaintainerName; }
	QString getStyleMaintainerEMail() const	{ return StyleMaintainerEMail; }
	QString getStyleCreateDate() const { return StyleCreateDate; }

	QString getCurrentFileName() const { return currentFileName; }
	QString getPreview() const { return Preview; }
	QString getDefaultAvatar() const { return DefaultAvatar; }
	QString getDealerPuck() const {	return DealerPuck; }
	QString getSmallBlindPuck() const { return SmallBlindPuck; }
	QString getBigBlindPuck() const	{ return BigBlindPuck; }
	QString getHandRanking() const { return HandRanking; }
	QString getActionPic(int);

	QString getFKeyIndicatorColor() const { return FKeyIndicatorColor; }
	QString getChanceLabelImpossibleColor() const { return ChanceLabelImpossibleColor; }
	QString getChanceLabelPossibleColor() const { return ChanceLabelPossibleColor; }
	QString getChatLogTextColor() const { return ChatLogTextColor; }
	QString getChatTextNickNotifyColor() const { return ChatTextNickNotifyColor; }
	QString getLogWinnerMainPotColor() const { return LogWinnerMainPotColor; }
	QString getLogWinnerSidePotColor() const { return LogWinnerSidePotColor; }
	QString getLogPlayerSitsOutColor() const { return LogPlayerSitsOutColor; }
	QString getLogNewGameAdminColor() const { return LogNewGameAdminColor; }
	QString getBreakLobbyButtonBgColor() const { return BreakLobbyButtonBgColor; }

	QString getMinimumWindowWidth() const { return MinimumWindowWidth; }
	QString getMinimumWindowHeight() const { return MinimumWindowHeight; }
	QString getMaximumWindowWidth() const { return MaximumWindowWidth; }
	QString getMaximumWindowHeight() const { return MaximumWindowHeight; }
	QString getFixedWindowWidth() const { return FixedWindowWidth; }
	QString getFixedWindowHeight() const { return FixedWindowHeight; }
	QString getIfFixedWindowSize() const {	return IfFixedWindowSize; }	
	
	bool getFallBack() const { return fallBack; }	
        bool getLoadedSuccessfull() const { return loadedSuccessfull; }

	//set pictures
	void setTableBackground(gameTableImpl*);
	void setCardHolderStyle(QLabel*, int /*bero*/);
	void setPlayerSeatActiveStyle(QGroupBox*);
	void setPlayerSeatInactiveStyle(QGroupBox*);
	void setToolBoxBackground(QGroupBox*);

	//set fonts + colors
	void setChatLogStyle(QTextBrowser*);
	void setChatInputStyle(QLineEdit*);
	void setCashLabelStyle(QLabel*);
	void setSetLabelStyle(QLabel*);
	void setPlayerNameLabelStyle(QLabel*);
	void setSmallFontBoardStyle(QLabel*);
	void setBigFontBoardStyle(QLabel*);
	void setMenuBarStyle(QMenuBar*);
	void setBreakButtonStyle(QPushButton*, int);
	void setSpeedStringStyle(QLabel*);
	void setVoteButtonStyle(QPushButton*);
	void setVoteStringsStyle(QLabel*);
	void setBetValueInputStyle(QLineEdit*);
	void setSliderStyle(QSlider*);
	
	void setTabWidgetStyle(QTabWidget*, QTabBar*);

	void setWindowsGeometry(gameTableImpl*);

	//set pics and fonts and colors 
        void setButtonsStyle(MyActionButton*, MyActionButton*, MyActionButton*, MyActionButton*, int);
        void setShowMyCardsButtonStyle( MyActionButton *sc);
	void setAwayRadioButtonsStyle(QRadioButton*);

	QString getActionAllInI18NString() const { return ActionAllInI18NString; }
	QString getActionRaiseI18NString() const { return ActionRaiseI18NString; }
	QString getActionBetI18NString() const { return ActionBetI18NString; }
	QString getActionCallI18NString() const { return ActionCallI18NString; }
	QString getActionCheckI18NString() const { return ActionCheckI18NString; }
	QString getActionFoldI18NString() const { return ActionFoldI18NString; }
	QString getRiverI18NString() const { return RiverI18NString; }
	QString getTurnI18NString() const { return TurnI18NString; }
 	QString getFlopI18NString() const { return FlopI18NString; }
	QString getPreflopI18NString() const { return PreflopI18NString; }
	QString getHandI18NString() const { return HandI18NString; }
	QString getGameI18NString() const { return GameI18NString; }
	QString getBetsI18NString() const { return BetsI18NString; }
 	QString getTotalI18NString() const { return TotalI18NString; }
	QString getPotI18NString() const { return PotI18NString; }
	
private:
	//style values
// 	INFOS
	QString StyleDescription;
	QString StyleMaintainerName;
	QString StyleMaintainerEMail;
	QString StyleCreateDate;
	QString PokerTHStyleFileVersion;
// 	WINDOWS SETTINGS
	QString IfFixedWindowSize;
	QString FixedWindowWidth;
	QString FixedWindowHeight;
	QString MinimumWindowWidth;
	QString MinimumWindowHeight;
	QString MaximumWindowWidth;
	QString MaximumWindowHeight;
// 	PICS
	QString Preview;
	QString ActionAllInI18NPic;
	QString ActionRaiseI18NPic;
	QString ActionBetI18NPic;
	QString ActionCallI18NPic;
	QString ActionCheckI18NPic;
	QString ActionFoldI18NPic;
	QString ActionWinnerI18NPic;
	QString BigBlindPuck;
	QString SmallBlindPuck;
	QString DealerPuck;
	QString DefaultAvatar;
	QString CardHolderFlop;
	QString CardHolderTurn;
	QString CardHolderRiver;
	QString FoldButtonDefault;
	QString FoldButtonHover;
	QString FoldButtonChecked;
	QString FoldButtonCheckedHover;
	QString CheckCallButtonDefault;
	QString CheckCallButtonHover;
	QString CheckCallButtonChecked;
	QString CheckCallButtonCheckedHover;
	QString BetRaiseButtonDefault;
	QString BetRaiseButtonHover;
	QString BetRaiseButtonChecked;
	QString BetRaiseButtonCheckedHover;
	QString AllInButtonDefault;
	QString AllInButtonHover;
	QString AllInButtonChecked;
	QString AllInButtonCheckedHover;
	QString RadioButtonPressed;
     	QString RadioButtonChecked;
     	QString RadioButtonCheckedHover;
     	QString RadioButtonUnchecked;
     	QString RadioButtonUncheckedHover;
	QString PlayerTopSeatInactive;
	QString PlayerTopSeatActive;
	QString PlayerBottomSeatInactive;
	QString PlayerBottomSeatActive;
	QString Table;
	QString HandRanking;
	QString ToolBoxBackground;
        QString ShowMyCardsButtonDefault;
        QString ShowMyCardsButtonHover;

//	I18N ACTION STRINGS
	QString ActionAllInI18NString;
     	QString ActionRaiseI18NString;
     	QString ActionBetI18NString;
     	QString ActionCallI18NString;
     	QString ActionCheckI18NString;
     	QString ActionFoldI18NString;
	QString PotI18NString;
	QString TotalI18NString;
	QString BetsI18NString;
	QString GameI18NString;
	QString HandI18NString;
	QString PreflopI18NString;
	QString FlopI18NString;
	QString TurnI18NString;
	QString RiverI18NString;

// 	COLORS
	QString FKeyIndicatorColor;
	QString ChanceLabelPossibleColor;
	QString ChanceLabelImpossibleColor;
	QString ChatTextNickNotifyColor;
	QString ChatLogTextColor;
	QString ChatLogBgColor;
	QString ChatLogScrollBarBorderColor;
	QString ChatLogScrollBarBgColor;
	QString ChatLogScrollBarHandleBorderColor;
	QString ChatLogScrollBarHandleBgColor;
	QString ChatLogScrollBarArrowBorderColor;
	QString ChatLogScrollBarArrowBgColor;
	QString LogWinnerMainPotColor;
	QString LogWinnerSidePotColor;
	QString LogPlayerSitsOutColor;
	QString LogNewGameAdminColor;
	QString TabWidgetBorderColor;
	QString TabWidgetBgColor;
     	QString TabWidgetTextColor;
	QString MenuBgColor;
	QString MenuTextColor;
	QString BreakLobbyButtonBgColor;
	QString BreakLobbyButtonTextColor;
	QString BreakLobbyButtonBgDisabledColor;
	QString BreakLobbyButtonTextDisabledColor;
	QString BreakLobbyButtonBgBlinkColor;
	QString BreakLobbyButtonTextBlinkColor;
	QString PlayerCashTextColor;
	QString PlayerBetTextColor;
	QString PlayerNickTextColor;
	QString BoardBigTextColor;
	QString BoardSmallTextColor;
	QString SpeedTextColor;
	QString VoteButtonBgColor;
	QString VoteButtonTextColor;
	QString BetInputTextColor;
	QString BetInputBgColor;
	QString BetInputDisabledTextColor;
	QString BetInputDisabledBgColor;
	QString FoldButtonTextColor;
	QString FoldButtonCheckableTextColor;
	QString CheckCallButtonTextColor;
	QString CheckCallButtonCheckableTextColor;
	QString BetRaiseButtonTextColor;
	QString BetRaiseButtonCheckableTextColor;
	QString AllInButtonTextColor;
	QString AllInButtonCheckableTextColor;
	QString BetSpeedSliderGrooveBgColor;
     	QString BetSpeedSliderGrooveBorderColor;
     	QString BetSpeedSliderHandleBgColor;
     	QString BetSpeedSliderHandleBorderColor;
        QString ShowMyCardsButtonTextColor;

// 	SIZES
	QString ChatLogTextSize;

	//internal
	QString font2String;
	QString font1String;
	QString textBrowserFontsize;
	QString cashFontSize;
	QString setLabelFontSize;
	QString playerNameLabelFontSize;
	QString smallBoardFontSize;
	QString bigBoardFontSize;
	QString humanPlayerButtonFontSize;
	QString betValueFontSize;

	QString tabBarPaddingTop;
	QString tabBarPaddingSide;

	QByteArray fileContent;
	QString currentFileName;
	QString currentDir;

	QStringList leftItems;
	QStringList itemPicsLeft;
	
	ConfigFile *myConfig;
        QWidget *myW;

        bool fallBack;
        bool loadedSuccessfull;
};

#endif
