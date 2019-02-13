#include <iostream>

using namespace std;

int score = 0;

class Pergunta{
	public:
		string pergunta;
		string respostas[4];
		int correct_index;
};

void perguntar(Pergunta p){

	int selected;

	cout << p.pergunta << endl;
	for(int i = 1; i <= 4; i++){

		cout << i << ") " << p.respostas[i-1] << endl;	

	}

	cin >> selected;
	
	if((selected-1) == p.correct_index) score++;

	cout << "" << endl;

}

int main(){

	Pergunta p[10];
	
	p[0].pergunta = "De onde é a invenção do chuveiro elétrico?";
	p[0].respostas[0] = "França";
	p[0].respostas[1] = "Inglaterra";
	p[0].respostas[2] = "Brasil";
	p[0].respostas[3] = "Itália";
	p[0].correct_index = 2;

	p[1].pergunta = "Qual o nome do presidente do Brasil que ficou conhecido como Jango?";
	p[1].respostas[0] = "João Goulart";
	p[1].respostas[1] = "Getúlio Vargas";
	p[1].respostas[2] = "Jânio Quadros";
	p[1].respostas[3] = "Jacinto Anjos";
	p[1].correct_index = 0;

	p[2].pergunta = "Qual o livro mais vendido no mundo a seguir à Bíblia?";
	p[2].respostas[0] = "O Senhor dos Anéis";
	p[2].respostas[1] = "Ela, a Feiticeira";
	p[2].respostas[2] = "O Pequeno Príncipe";
	p[2].respostas[3] = "Dom Quixote";
	p[2].correct_index = 3;

	p[3].pergunta = "Quantas casas decimais tem o número pi?";
	p[3].respostas[0] = "Milhares";
	p[3].respostas[1] = "Centenas";
	p[3].respostas[2] = "Duas";
	p[3].respostas[3] = "Trilhares";
	p[3].correct_index = 3;

	p[4].pergunta = "O que a palavra legend significa em português?";
	p[4].respostas[0] = "Legenda";
	p[4].respostas[1] = "Legendário";
	p[4].respostas[2] = "Lenda";
	p[4].respostas[3] = "Conto";
	p[4].correct_index = 2;

	p[5].pergunta = "Qual o número mínimo de jogadores numa partida de futebol?";
	p[5].respostas[0] = "8";
	p[5].respostas[1] = "7";
	p[5].respostas[2] = "5";
	p[5].respostas[3] = "10";
	p[5].correct_index = 1;

	p[6].pergunta = "Quanto tempo a luz do Sol demora para chegar à Terra?";
	p[6].respostas[0] = "12 minutos";
	p[6].respostas[1] = "8 minutos";
	p[6].respostas[2] = "1 dia";
	p[6].respostas[3] = "segundos";
	p[6].correct_index = 1;

	p[7].pergunta = "Qual a nacionalidade de Che Guevara?";
	p[7].respostas[0] = "Argentina";
	p[7].respostas[1] = "Peruana";
	p[7].respostas[2] = "Cubana";
	p[7].respostas[3] = "Boliviana";
	p[7].correct_index = 0;

	p[8].pergunta = "Em que período da pré-história o fogo foi descoberto?";
	p[8].respostas[0] = "Período da Pedra Polida";
	p[8].respostas[1] = "Idade dos Metais";
	p[8].respostas[2] = "Neolítico";
	p[8].respostas[3] = "Paleolítico";
	p[8].correct_index = 3;

	p[9].pergunta = "Qual a montanha mais alta do Brasil?";
	p[9].respostas[0] = "Pico da Neblina";
	p[9].respostas[1] = "Monte Roraima";
	p[9].respostas[2] = "Pico Paraná";
	p[9].respostas[3] = "Pico da Bandeira";
	p[9].correct_index = 0;

	for(int i = 0; i < 10; i++)
		perguntar(p[i]);

	cout << "Você acertou " << score << " de 10!" << endl;
	
	return 0;

}


