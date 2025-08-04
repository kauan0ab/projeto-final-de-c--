#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <sstream>
using namespace std;

void mostrarMenu()
{
  cout << "Escolha a opção desejada: " << endl;
  cout << "1: Cadastrar novo aluno" << endl;
  cout << "2: Cadastrar nova disciplina" << endl;
  cout << "3: Cadastrar novo aluno" << endl;
  cout << "4: Cadastrar novo aluno" << endl;
  cout << "5: Cadastrar novo aluno" << endl;
  cout << "6: Cadastrar novo aluno" << endl;
  cout << "7: Encerrar programa" << endl;
}

bool apenasLetras(const string & str)
{
  for (char c : str)
  {
    if (!isalpha(c))
      return false;
  }
  return true;
}

bool apenasNumeros(const string & str)
{
  for (char c : str)
  {
    if (!isdigit(c))
      return false;
  }
  return true;
}

string cadastrarAluno()
{
  ofstream arquivo("alunos.txt", ios::app);
  if (!arquivo.is_open())
  {
    cerr << "Erro ao abrir o arquivo" << endl;
    return "";
  }

  cin.ignore();
  string entrada;
  cout << "Digite no formato nome-matricula-turma: ";
  getline(cin, entrada);

  stringstream ss(entrada);
  string nome, matricula, turma;

  if (!getline(ss, nome, '-') || !getline(ss, matricula, '-') || !getline(ss, turma, '-'))
  {
    cout << "Formato inválido. Use nome-matricula-turma" << endl;
    return "";
  }

  if (!apenasLetras(nome))
  {
    cout << "Nome inválido. Deve conter apenas letras." << endl;
    return "";
  }

  if (!apenasNumeros(matricula))
  {
    cout << "Matrícula inválida. Deve conter apenas números." <<endl;
    return "";
  }

  if (!apenasNumeros(turma))
  {
    cout << "Turma inválida. Deve conter apenas números (codigo da turma)." << endl;
    return "";
  }

  arquivo << entrada << endl;
  arquivo.close();
  cout << "Aluno cadastrado com sucesso." << endl;

  return entrada;
}
string cadastrarTurma()
{
  ofstream arquivo("disciplinas.txt", ios::app);
  if(!arquivo.is_open())
  {
    cerr << "Erro ao abrir arquivo!" << endl;
    return "";
  }
  string turma;
  cin.ignore();
  cout << "Digite a disciplina para cadstro no modelo 'nome-codigo': " << endl;
  getline(cin, turma);
  arquivo << turma << endl;
  arquivo.close();
  cout << "Disciplina adicionada com sucesso!" << endl;
  return turma;
}
void armazenarNotas(int (&notas)[][5], int totalAlunos)
{
  for(int i = 0; i <)
}


int main()
{
  int totalAlunos = 0, totalDisciplinas = 0;
  int notas[1000][5];
  int menu;
  do
  {
    mostrarMenu();
    cin >> menu;

    switch (menu)
    {
    case 1:
      cadastrarAluno();
      break;
    case 2:
      cadastrarTurma();
      break;

    case 7:
      cout << "Encerrando programa." <<endl;
      break;

    default:
      cout << "Opção inválida." <<endl;
      break;
    }

  } while (menu != 7);

  return 0;
}
