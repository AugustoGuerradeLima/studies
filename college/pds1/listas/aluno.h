/*
struct aluno
aceita tipagem com duas escritas
nomes reservados para passagem por referencia
*/
typedef

struct aluno{
    char nome[30];
    int matricula;
    float notas[5];
}Aluno;

typedef aluno* ref_aluno;
typedef Aluno* ref_Aluno;

/*
media
calcula a media de notas de uma aluno
*/
float media(Aluno a){
    float m = 0.0;
    for(int i = 0; i < 4; i++){
        m += a.notas[i];
    }
    return(m/4.0);
}
/*
aluno_maior_media
obtem o aluno com maior media e retorna sua posicao
*/
int aluno_maior_media(Aluno* alunos, int n){
    float mm = 0.0;
    int index = 0;
    for(int i = 0; i < n ; i++){
        if(mm < media(alunos[i])){
            mm = media(alunos[i]);
            index = i;
        }
    }
    return(index);
}
