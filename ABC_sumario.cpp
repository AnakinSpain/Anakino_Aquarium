/*
//**********************************************************************************************
//********************************** Aba Botões e etc ******************************************
//**********************************************************************************************
Coordenandas do Botões
void clearScreen()

void printButton(char* text, int x1, int y1, int x2, int y2, boolean setFont = false)

void printButton_verde(char* text, int x1, int y1, int x2, int y2, boolean setFont = false)

void printButton_vermelho(char* text, int x1, int y1, int x2, int y2, boolean setFont = false)

void printHeader(char* headline)

void setFont(boolean font, byte cr, byte cg, byte cb, byte br, byte bg, byte bb)

void waitForIt(int x1, int y1, int x2, int y2)

//**********************************************************************************************
//************************************** Aba Cosm **********************************************
//**********************************************************************************************
void check_status()

void cosm ()

//**********************************************************************************************
//************************************ Aba Dosadoras *******************************************
//**********************************************************************************************
void check_dosagem_automatica_1()

void check_dosagem_automatica_2()

void check_dosagem_automatica_3()

void check_dosagem_personalizada_1()

void check_dosagem_personalizada_2()

void check_dosagem_personalizada_3()

//**********************************************************************************************
//************************************* Aba EEPROM *********************************************
//**********************************************************************************************
struct config_t

struct config_PHR

struct config_PHA

struct config_ORP

struct config_DEN 

struct config_tpa

struct config_dos

void SaveLEDToEEPROM() 

void SaveTempToEEPROM()

void SalvartpaEEPROM()

void SavePHRToEEPROM()

void SaveORPToEEPROM()

void SavePHAToEEPROM()

void SaveDENToEEPROM()

void Salvar_dosadora_EEPROM()

void ReadFromEEPROM()

void lertpaEEPROM()

void lerPHREEPROM()

void lerORPEEPROM()

void lerPHAEEPROM()

void lerDENEEPROM()

void ler_dosadora_EEPROM()


//**********************************************************************************************
//*********************************** Aba Fases da lua *****************************************
//**********************************************************************************************
float moonPhase(int moonYear, int moonMonth, int moonDay)

double MyNormalize(double v)

byte validateDate(byte d, byte m, word y)

//**********************************************************************************************
//*********************************** Aba Gráficos *********************************************
//**********************************************************************************************
void tempgScreen()

void orpScreen()

void PHAScreen()

void PHRScreen()

void densidadeScreen()

//**********************************************************************************************
//*********************************** Aba Grava Sd card ****************************************
//**********************************************************************************************
void writeCRLF(SdFile& f) 

void logtempgraf()

void logphagraf()

void logphrgraf()

void logorpgraf()

void logdengraf()

void logparametros()

//**********************************************************************************************
//*********************************** Aba Início ***********************************************
//**********************************************************************************************
void mainScreen(boolean refreshAll=false)

//**********************************************************************************************
//*********************************** Aba Leds *************************************************
//**********************************************************************************************
int LedToPercent (int Led_out)

void LED_levels_output()

int check( byte *pt1, byte *pt2, int lstep)

//**********************************************************************************************
//*********************************** Aba Loop *************************************************
//**********************************************************************************************
Funciones verficadas continuamente.

//**********************************************************************************************
//*********************************** Aba Menus ************************************************
//**********************************************************************************************
void menuScreen() case 1: de ProcessyMyTouch.

void setClock() case 2: de ProcessyMyTouch.

void testScreen(boolean refreshAll=false) case 3: de ProcessyMyTouch.

void tempScreen(boolean refreshAll=false)  case 4: de ProcessyMyTouch.

void ledSetScreen() case 5: de ProcessyMyTouch.

void ledChangeScreen() case 6: de ProcessyMyTouch.

void tpaScreen(boolean refreshAll = false) case 7: de ProcessyMyTouch.

void menu_dosadoras() case 8: de ProcessyMyTouch.

void graficoScreen() case 9: de ProcessyMyTouch.

void waveScreen(boolean refreshAll=false)  case 10: de ProcessyMyTouch.

void parametroScreen() case 14: de ProcessyMyTouch.

void config_phR_Screen(boolean refreshAll=false) case 15: de ProcessyMyTouch.

void config_orp_Screen(boolean refreshAll=false) case 16: de ProcessyMyTouch. Aqui pondre la seleccion de modo de los leds

void config_phA_Screen(boolean refreshAll=false)  case 18: de ProcessyMyTouch.

void config_dens_Screen(boolean refreshAll=false)  case 20: de ProcessyMyTouch.

void selecionar_dosadora(boolean refreshAll=false) case 21: de ProcessyMyTouch.

void calibrar_dosadoras(boolean refreshAll=false) case 26: de ProcessyMyTouch.

void config_dosagem_manual(boolean refreshAll=false) case 27: de ProcessyMyTouch.

void config_dosagem_automatica(boolean refreshAll=false) case 28: de ProcessyMyTouch.

void config_dosagem_personalizada(boolean refreshAll=false)  case 29: de ProcessyMyTouch.

void solicitar_senha() case 30: de ProcessyMyTouch.

void config_dosagem_personalizada_2(boolean refreshAll=false) case 31: de ProcessyMyTouch.

void rever_configuracao_dosadoras() case 32: de ProcessyMyTouch.

void rever_dosagem_automatica() case 33: de ProcessyMyTouch.

void rever_dosagem_personalizada() case 34: de ProcessyMyTouch.

void desativar_dosadoras(boolean refreshAll = false) case 35: de ProcessyMyTouch.

void luz_noturna(boolean refreshAll=false) case 36: de ProcessyMyTouch.

void menuScreen_2() case 37: de ProcessyMyTouch.

//**********************************************************************************************
//*********************************** Aba Parametros *******************************************
//**********************************************************************************************
void checkTempC()

void check_nivel()

void check_PH_reator()

void check_PH_aquario()

void check_densidade()

void check_ORP()

void check_alarme()

//**********************************************************************************************
//********************************** Aba ProcessyMyTouch ***************************************
//**********************************************************************************************
void processMyTouch()

//**********************************************************************************************
//********************************** Aba Senha *************************************************
//**********************************************************************************************
void updateStr(int val)

//**********************************************************************************************
//********************************** Aba Setup *************************************************
//**********************************************************************************************
Funções que são executadas quando o Arduino é iniciado

//**********************************************************************************************
//********************************** Aba Stamps ************************************************
//**********************************************************************************************
void parametros()

void Open_channel(short channel)

//**********************************************************************************************
//********************************** Aba Tempo e data ******************************************
//**********************************************************************************************
byte validateDateForMonth(byte d, byte m, word y)

byte calcDOW(byte d, byte m, int y)

//**********************************************************************************************
//********************************** Aba Troca de água *****************************************
//**********************************************************************************************
void checktpa()

void reposicao_agua_doce ()

*/
