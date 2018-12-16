#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <windows.h> 
using namespace std;

	//Declaración de variables
		//arreglos
			string fam[35]={
			"Lorenzo","Teresa","Bernabe","Dolores",
			"Malena","Jose","Claudia","Francisco",
			"Gabriela","Teresa","Manuel","Adolfo","Francisco","Rafael",
			"Carlos","Ximena","Laura",
			"Sandi","Andres","Noe",
			"Samuel","Emanuel","Lalo",
			"Edith","ISMAEL",
			"Danae","Jona","Angel",
			"Mario","Paco","Quisay",
			"Zuluay","Yamve",
			"Saul","Nepthali"};
		
//Hacer la pantalla completa conseguida en esta fuente.
//   http://www.programacionenc.net/index.php?option=com_content&view=article&id=134:ejecutar-un-programa-de-consola-a-pantalla-completa&catid=31:general
void AltEnter()
{
    keybd_event(VK_MENU,
                0x38,
                0,
                0);
    keybd_event(VK_RETURN,
                0x1c,
                0,
                0);
    keybd_event(VK_RETURN,
                0x1c,
                KEYEVENTF_KEYUP,
                0);
    keybd_event(VK_MENU,
                0x38,
                KEYEVENTF_KEYUP,
                0);
    return;
} 

//Funcion Principal
int main() {
	//Hacer pantalla grande
	AltEnter(); 
	
	//Arbol
	cout<<"----------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
	cout<<"----------------------------------------------------------------  Arbol Familiar: Flores Melendez Ismael  ------------------------------------------------------------\n";
	cout<<"----------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n\n";
//	cout<<"-----------------------------------------------------------------------------------|----------------------------------------------------------------------------------\n";
	
	cout<<"----------------------------------------------------------------------------------Root--------------------------------------------------------------------------------\n";
	cout<<"                                                                                   |                                                                                  \n";
	cout<<"                                                                                   |                                                                                  \n";
    cout<<"                                     ---------------------------------------------------------------------------                                                      \n";
    cout<<"                                     |                                                                         |                                                      \n";
	cout<<"                    --------------------------------                                       -----------------------------------------                                  \n";
	cout<<"                    |                              |                                       |                                       |                                  \n";
	cout<<"\t\t"+fam[0]+"\t\t\t\t"+fam[1]+"\t\t\t\t\t"+fam[2]+"\t\t\t\t\t"+fam[3]+"\n";  
	cout<<"                    |                              |                                       |                                       |                                  \n";
	cout<<"          --------------------------------------------------                --------------------------------------------------------------------------------   \n";
	cout<<"          |               |                |               |                |             |                |               |                |              |   \n";
	cout<<"\t"+fam[4]+"\t\t"+fam[5]+"\t\t"+fam[6]+"\t\t"+fam[7]+"\t"+fam[8]+"\t"+fam[9]+"\t\t"+fam[10]+"\t\t"+fam[11]+"\t\t"+fam[12]+"\t"+fam[13]+"\n";
	cout<<"          |               |                |                    |       |                 |                |               |                |\n";
	cout<<"  ---------------       -------------      ---------------      ---------         ------------     --------------          -------      ---------\n";
	cout<<"  |       |     |       |     |     |      |      |      |      |       |         |     |    |     |      |     |          |     |      |       |\n";
	cout<<fam[14]+" "+fam[15]+" "+fam[16]+"   "+fam[17]+" "+fam[18]+" "+fam[19]+"   "+fam[20]+" "+fam[21]+" "+fam[22]+"   "+fam[23]+" "+fam[24]+
			"\t"+fam[25]+" "+fam[26]+" "+fam[27]+"   "+fam[28]+" "+fam[29]+" "+fam[30]+"   "+fam[31]+" "+fam[32]+"    "+fam[33]+" "+fam[34]+"\n";
			
	cout<<"\n\n\n";
	system("pause");
	
	//Seccion de preguntas
	return 0;
}
