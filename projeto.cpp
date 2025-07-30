#include <iostream>
#include <fstream>
#include <string>
using namespace std;


void media(){
    
  
}
int main()

    //ofstream serve para escrever 
    //ifstream para ler
    // fstream para ambos.

{int op; 
   
    cout << endl;
    cout << "====Sistema de Gerenciamento de Notas Escolares====" << endl; 
    do
     {

    cout << "-selecione a opcao que desejar abaixo digitando o numero-"<< endl;
    cout << "1 - cadastro de alunos" << endl;
    cout << "2 - cadastro de diciplinas " << endl;
    cout << "3 - lancamento de notas" << endl;
    cout << "4 - calculo de medias" << endl;
    cout << "5 - consultar notas" << endl;
    cout << "6 - relatorios" << endl;
    cout << "7 - sair do programa" << endl;
    cin >> op;
    
    switch (op)
        {
        case 1:
       
         break;
        
        case 2:
       
          break;

        case 3: 
    
          break;
        
        case 4 :
         break;

         case 5:
         break;

         case 6:
         break;

         case 7:
         break;

        default:
        cout << "!ERROR!: por favor selecione uma opcao valida de 1 a 4!" << endl;
          cout << endl;
    }

    } while (op!=7);
    cout << "encerrando..." <<endl <<" obrigado!" << endl;
 return 0;
}