#include <iostream>
using namespace std;
string nick;
int saldo,derrota,vitoria;
char op;

int ranqueadas(){
    saldo=vitoria-derrota;
    return saldo;
}

int main (){

    int rank;


    cout<<"VERIFIQUE SEU RANKING BASEADO EM SUAS VITORIAS\n";
    
    do{
        cout<<"\nDigite seu nick: ";
        cin>>nick;
        cout<<"\nDigite o numero de vitorias: ";
        cin>>vitoria;
        cout<<"Digite o numero de derrotas: ";
        cin>>derrota;

        rank=ranqueadas();



        if(rank<10){
            cout<<"\nO Heroi de nome "<<nick <<" esta no ranking FERRO com um total de "<<rank <<" vitorias.";
        }else if (rank>=11 and rank<=20){
            cout<<"\nO Heroi de nome "<<nick <<" esta no ranking BRONZE com um total de "<<rank <<" vitorias.";
        }else if (rank>=21 and rank<=50){
            cout<<"\nO Heroi de nome "<<nick <<" esta no ranking PRATA com um total de "<<rank <<" vitorias.";
        }else if (rank>=51 and rank<=80){
            cout<<"\nO Heroi de nome "<<nick <<" esta no ranking OURO com um total de "<<rank <<" vitorias.";
        }else if (rank>=81 and rank<=90){
            cout<<"\nO Heroi de nome "<<nick <<" esta no ranking DIAMANTE com um total de "<<rank <<" vitorias.";
        }else if (rank>=91 and rank<=100){
            cout<<"\nO Heroi de nome "<<nick <<" esta no ranking LENDARIO com um total de "<<rank <<" vitorias.";
        }else{
            cout<<"\nO Heroi de nome "<<nick <<" esta no ranking IMORTAL com um total de "<<rank <<" vitorias.";
        }

        do{
            cout<<"\n\nDeseja realizar a verificacao de ranking novamente S/N : ";
            cin>>op;

        }while(op !='s' && op !='S' && op !='n' && op !='N');



    }while(op=='s' or op=='S');



    
    
    
    
    
    return 0;

}